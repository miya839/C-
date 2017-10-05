#include<iostream>
using namespace std;

class myClass{
    int i,j;
    public:
        myClass(int a, int b);
        void show();
};

myClass::myClass(int a,int b){
    i = a;
    j = b;
}

void myClass::show(){
    cout << i << ' ' << j << '\n';
}


int main(){
    int x,y;

    cout << "input 2 argments";
    cin >> x >> y ;
    myClass ob(x,y);
    ob.show();

    return 0;
}


