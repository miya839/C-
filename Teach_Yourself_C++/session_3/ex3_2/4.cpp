#include<iostream>
using namespace std;

class samp{
    int i;
    public:
        samp(int n){ 
            i= n;
            cout << "コントラクタ呼び出し\n";
        };
        ~samp() { cout << "デストラクタ呼び出し\n";};
        int get_i() {return i;};
};

int sqr_i(samp o){
    return o.get_i() * o.get_i();
}

int main(){
    samp a(10);
    cout <<sqr_i(a) << '\n';
    return 0;
}


