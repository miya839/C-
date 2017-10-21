#include<iostream>
#include<cstdlib>
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

    int j;

    for(int i = 0; i< 10; i++){
        j = rand();
        if(j%2) p = &d_ob1;
        else p = &d_ob2;
        p->func();
    }
    return 0;
}


