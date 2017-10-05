#include<iostream>
using namespace std;

class myClass{
    int a;
    public:
        myClass(int x);
        int get();
//        ~myClass();
};

myClass::myClass(int x){
    a = x;
}

int myClass::get(){
    return a;
}

int main(){
    myClass ob(120);
    myClass *p;

    p= &ob;

    cout << ob.get();
    cout << '\n';
    cout << p->get() << '\n';
    
    return 0;
}


