#include<iostream>
using namespace std;

class A{
    int i;
    public:
        A(int a){ i =a;}
};

class B{
    int j;
    public:
        B(int a){j = a;}
};

class C : public A, public B{
    int k;
    public:
        C(int a,int b) : A(a),B(b){
            k = 0;
        }
};

int main(){
    C ob(1,2);
    return 0;
}


