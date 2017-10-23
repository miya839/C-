#include<iostream>
#include<typeinfo>
using namespace std;

class BaseClass{
    virtual void f(){ }
};

class Derived1 : public BaseClass{
};

class Derived2 : public BaseClass{
};

int main(){
    int i;
    BaseClass *p, baseob;
    Derived1 ob1;
    Derived2 ob2;

    cout << "iのtypedIdは: \n";
    cout << typeid(i).name() << endl;

    p = &baseob;
    cout << "pが指しているのはオブジェクトタイプ " << endl;
    cout << typeid(*p).name() << endl;

    p = &ob1;
    cout << "pが指しているのはオブジェクトタイプ " << endl;
    cout << typeid(*p).name() << endl;
    
    p = &ob2;
    cout << "pが指しているのはオブジェクトタイプ " << endl;
    cout << typeid(*p).name() << endl;
    
    return 0;
}


