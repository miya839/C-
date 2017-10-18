#include<iostream>
using namespace std;

class base{
    int x;
    public:
        void setx(int i){x = i;}
        int getx(){return x;}
};

class derived : public base{
    int y;
    public:
        void sety(int i){ y=i;}
        int gety(){return y;};
};

int main(){
    base *p;
    base b_ob;
    derived d_ob;

    p = &b_ob;
    p->setx(10);
    cout << "baseクラスのオブジェクト x:" << p->getx() << "\n";

    p = &d_ob;
    p->setx(99);

    d_ob.sety(88);
    cout << "derivedクラスのオブジェクト x: " << p->getx() << '\n';
    cout << "derivedクラスのオブジェクト y: " << d_ob.gety() << '\n';


    return 0;
}


