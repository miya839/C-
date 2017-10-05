#include<iostream>
using namespace std;

int main(){
    int i,j;
    double d;
    char ch;

    i = 10;
    j = 20;
    d = 99.101;

    cout << "値を入力:";
    cin >> i;
    cout << i << ' ' << j << ' ' << d;

    cout << "キーを入力 xで停止\n";

    do{
        cout << ": ";
        cin >> ch;
    }while(ch != 'x');

    return 0;
}

