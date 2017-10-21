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

    queue q_ob;
    p = &q_ob;
    p->store(1);
    p->store(2);
    p->store(3);

    cout << "キュー: ";
    cout << p->retrieve();
    cout << p->retrieve();
    cout << p->retrieve();

    cout << '\n';
    stack s_ob;
    p = &s_ob;

    p->store(1);
    p->store(2);
    p->store(3);

    cout << "キュー: ";
    cout << p->retrieve();
    cout << p->retrieve();
    cout << p->retrieve();

    cout << '\n';

    return 0;
}


