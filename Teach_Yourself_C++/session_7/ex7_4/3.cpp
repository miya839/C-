#include<iostream>
using namespace std;

class B1{
    public:
        B1(){ cout << "B1のコンストラクタ呼び出し\n";}
        ~B1(){ cout << "B1のデストラクタ呼び出し\n";}
};

class B2{
    int b;
    public:
        B2(){ cout << "B2のコンストラクタ呼び出し\n";}
        ~B2(){ cout << "B2のデストラクタ呼び出し\n";}
};

class D : public B1, public B2{
    public:
        D(){ cout << "Dのコンストラクタ呼び出し\n";}
        ~D(){ cout << "Dのデストラクタ呼び出し\n";}
};


int main(){
    D ob;
    return 0;
}


