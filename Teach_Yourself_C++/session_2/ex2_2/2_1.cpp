#include<iostream>
using namespace std;

class myClass{
    int a;
    public:
        myClass(int x);
        void show();
};

myClass::myClass(int x){
    cout << "Call Constract";
    a = x;
}

void myClass::show(){
    cout << a << '\n';
}

int main(){
    myClass ob(4);

    ob.show();

    return 0;
}

