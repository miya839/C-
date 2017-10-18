#include<iostream>
using namespace std;

class base{
    int i;
    public:
        base(int n){
            cout << "baseクラスのコンストラクタ呼び出し\n";
            i = n;
        }
        ~base(){ cout << "baseクラスのデストラクタ呼び出し\n";
        }
        void showi(){ cout << i << "\n";}
};

class derived : public base{
    int j;
    public:
        derived(int n) : base(n){
            cout << "derivedクラスのコンストラクタ\n";
            j = n;
        }
        ~derived(){ cout << "derivedクラスのデストラクタ\n";
        }
        void showj() { cout << j << "\n";}
};

int main(){
    derived o(10);

    o.showi();
    o.showj();

    return 0;
}


