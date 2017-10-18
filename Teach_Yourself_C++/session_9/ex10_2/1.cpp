#include<iostream>
using namespace std;

class base{
    public:
    int i;
    base(int x){ i = x;}
    virtual void func(){
        cout << "baseのfuncを使う: ";
        cout << i << "\n";
    }
};

class derived1 : public base{
    public :
        derived1(int x): base(x){}
        void func(){
            cout << "derived1のfuncを使う: ";
            cout << i*i << "\n";
        }
};

class derived2 : public base{
    public :
        derived2(int x) : base(x){}
        void func(){
            cout << "derived2のfuncを使う: ";
            cout << i+i << "\n";
        }
};

int main(){
    base *p;
    base ob(10);

    derived1 d_ob1(10);
    derived2 d_ob2(10);

    p = &ob;
    p-> func();
    p = &d_ob1;
    p-> func();
    p = &d_ob2;
    p-> func();
    return 0;
}


