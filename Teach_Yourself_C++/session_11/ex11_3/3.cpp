#include<iostream>
using namespace std;

void Xtest(int test){
    cout << "Xtestの内部. test is: \n" << test << '\n';
    if(test) throw test;
}

int main(){
    cout << "start\n";

    try{
        cout << "Tryの内部\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }

    catch(int i){
        cout << "catch! value is: " << i << '\n';
    }

    return 0;
}


