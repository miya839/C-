#include<iostream>
using namespace std;

void Xhandler(int test) throw(int,char,double){
    if(test == 0) throw test;
    if(test == 1) throw 'a';
    if(test == 2) throw 123.12;
}

int main(){
    cout << "start\n";
    try{
        Xhandler(0);
    }

    catch(int i){
        cout << "catch int\n";
    }
    catch(char const *ch){
        cout << "catch char\n";
    }
    catch(double d){
        cout << "catch double\n";
    }

    cout << "end\n";

    return 0;
}


