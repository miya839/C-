#include<iostream>
using namespace std;

void Xhandler(){
    try{
        throw "hello";
    }
    catch(char const *ch){
        cout << "Xhandlerのchar *を捕獲\n";
        throw;
    }
}

int main(){
    cout << "start\n";
    try{
        Xhandler();
    }
    catch(char const *){
        cout << "mainのchar * を捕獲\n";
    }
    cout << "end\n";

    return 0;
}


