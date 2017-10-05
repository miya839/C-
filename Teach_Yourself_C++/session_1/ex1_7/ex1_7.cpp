#include<iostream>
using namespace std;

int myabs(int n);
long myabs(long n);
double myabs(double n);

int main(){
    cout << "-10:" << myabs(-10) << "\n\n";
    cout << "-10L:" << myabs(-10L) << "\n\n";
    cout << "-10.01:" << myabs(-10.01) << "\n\n";
    return 0;
}

int myabs(int n){
    return n<0 ? -n : n;
}

long myabs(long n){
    return n<0 ? -n : n;
}

double myabs(double n){
    return n<0 ? -n : n;
}
   
