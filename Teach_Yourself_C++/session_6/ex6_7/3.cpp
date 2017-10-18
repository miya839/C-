#include<iostream>
#include<cstdlib>
using namespace std;

const int SIZE = 5;

class arraytype{
    int a[SIZE];
    public:
        arraytype(){
            int i;
            for(i = 0; i<SIZE; i++) a[i]  = i;
        }
        int &operator[](int i);
};

int &arraytype::operator[](int i){
    if(i<0 || i>SIZE -1){
        cout <<'\n' << i << "は境界エラー" << '\n';
        exit(1);
    }
    return a[i];
}

int main(){
    arraytype ob;
    int i ;

    for(i=0;i<SIZE;i++){
        cout << ob[i] << " " ;
    }
    return 0;
}


