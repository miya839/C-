#include<iostream>
using namespace std;

int main(){
    cout.unsetf(ios::dec);
    cout.setf(ios::hex | ios::scientific);
    cout << 123.23 << "Hello" << 100 << '\n';

    return 0;
}


