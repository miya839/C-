#include<iostream>
#include<new>
using namespace std;

int main(){
    int *p;
    try{
        p = new int;
    }catch(bad_alloc xa){
        cout << "miss\n";
        return 1;
    }

    for(*p = 0;*p < 10;(*p)++) cout << "*p" << " ";
    cout << "\n";

    delete p;

    return 0;
}


