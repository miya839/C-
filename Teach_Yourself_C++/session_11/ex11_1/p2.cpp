#include<iostream>
using namespace std;

template <class X> X my_min(X a, X b){
    if(a > b) return b;
    else return a;
}

int main(){
    cout << my_min(3,4) << '\n';
    cout << my_min('a','c') << '\n';
    cout << my_min(-1.1,2.2) << '\n';
    return 0;
}


