#include<iostream>
#include<cstdlib>
#include<cctype>
using namespace std;

class list{
    public:
        list *head1;
        list *tail;
        list *next;
        int num;
        list() {head1 = tail = next = NULL;}
        virtual void store(int i) = 0;
        virtual int retrieve() = 0;
};

class queue : public list{
    public:
        void store(int i);
        int retrieve();
};

void queue::store(int i){
    list *item;
    item = new queue;

    if(!item){
        cout << "メモリ割り当てエラー\n";
        exit(1);
    }
    item->num = i;

    if(tail) tail->next = item;
    tail = item;
    item->next = NULL;
    if(!head1) head1 = tail;
}

int queue::retrieve(){
    int i;
    list *p;

    if(!head1){
        cout << "リストは空です\n";
        return 0;
    }
    i = head1->num;
    p = head1;
    head1 = head1->next;
    delete p;
    return i;
}

class stack : public list{
    public :
        void store(int i);
        int retrieve();
};

void stack::store(int i){
    list *item;
    item = new stack;
    if(!item){
        cout << "メモリ割り当てエラ−\n";
        exit(1);
    }

    item->num = i;
    if(head1) item->next = head1;
    head1 = item;
    if(!tail) tail = head1;
}

int stack::retrieve(){
    int i;
    list *p;

    if(!head1){
        cout << "リストは空です\n";
        return 0;
    }

    i = head1->num;
    p = head1;
    head1 = head1->next;
    delete p;
    return i;
}

int main(){
    list *p;
    stack s_ob;
    queue q_ob;
    char ch;
    int i;

    for(i=0; i<10; i++){
        cout << "スタックかキューを選択してください(S/Q): ";
        cin >> ch;
        ch = tolower(ch);
        if(ch =='q') p = &q_ob;
        else p = &s_ob;
        p->store(i);
    }

    cout << "Tを入力すると終了します\n";
    for(;;){
        cout << "スタックとキューのどちらかから取り除きますか (S/Q): ";
        cin >> ch;
        ch = tolower(ch);
        if(ch=='t') break;
        if(ch=='q') p = &q_ob;
        else p = &s_ob;
        cout << p->retrieve() << "\n";
    }
    cout << "\n";


    return 0;
}


