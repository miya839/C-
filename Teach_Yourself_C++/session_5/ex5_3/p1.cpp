#include<iostream>
#include<cstdlib>
using namespace std;

long mystrtol(const char *start,char **end, int base = 10){
    return strtol(start,end,base);
}

int main(){
    char *s1 = "100324";
    char *p;

    cout << mystrtol(s1,&p) << '\n';
    cout << mystrtol(s1,&p,16) << '\n';
    cout << mystrtol(s1,&p,2) <<'\n';
    return 0;
}


