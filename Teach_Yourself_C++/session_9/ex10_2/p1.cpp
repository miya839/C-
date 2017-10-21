#include<iostream>
using namespace std;

class num{
    public:
        int i;
        num(int x){i = x;}
        virtual void shownum(){
            cout << i << '\n';
        }
};

class outhex : public num{
    public:
        outhex(int x) : num(x){}
        void shownum(){
            cout << hex << i << '\n';
        }
};

class outoct : public num{
    public:
        outoct(int x) : num(x){}
        void shownum(){
            cout << oct << i << '\n';
        }
};

int main(){

    outhex ob1(10);
    outoct ob2(20);

    ob1.shownum();
    ob2.shownum();


    return 0;
}


