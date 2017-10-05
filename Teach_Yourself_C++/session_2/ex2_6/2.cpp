#include<iostream>
using namespace std;

inline int min(int a, int b){
    return a<b ? a : b;
}

inline long min(long a, long b){
    return a<b ? a : b;
}

inline float min(float a, float b){
    return a<b ? a : b;
}

int main(){
    cout << min(-10,10) << '\n';
    cout << min(-10L,10L) << '\n';
    cout << min(10.1,100.003) << '\n';
    return 0;
}


