#include<iostream>
#include<new>
using namespace std;

int main(){
    double *p;
    do{
        try{
            p = new double[100];
        }catch(bad_alloc xa){
            cout << "miss\n";
            return 1;
        }
        cout << "メモリ割り当て成功\n";
    }while(p);
    return 0;
}


