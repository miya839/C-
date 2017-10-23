#include<iostream>
using namespace std;

void Xhandler(int test){
    try{
        if(test) throw test;
        else throw "value is 0\n";
    }

    catch(int i){
        cout << "catch! Ex. #: " << i << '\n';
    }
    catch(char const *ch){
        cout << ch ;
    }
}

int main(){
    cout << "start\n";

    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);

    cout << "end\n";

     return 0;
}


