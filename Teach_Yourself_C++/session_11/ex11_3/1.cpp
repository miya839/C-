#include<iostream>
using namespace std;

int main(){
    cout << "start\n";

    try{
        cout << "tryのブロックの内部\n";
        throw 10;
        cout << "実行されない\n";
    }

    catch(int i){
        cout << "catch value is: " << i << '\n';
    }

    cout << "end\n";
        
    return 0;
}


