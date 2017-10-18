#include<iostream>
#include<cstdlib>
using namespace std;

class array2{
    int sizeX,sizeY;
    char *p;
    public:
        array2(int i,int j);
        ~array2() { delete [] p;}
        char &put(int i,int j);
        char get(int i,int j);
};

array2::array2(int i,int j){
    p = new char [i*j];

    if(!p){
        cout << "memory error\n";
        exit(1);
    }
    sizeX = i;
    sizeY = j;
}

char &array2::put(int i,int j){
    if(i < 0 || i>sizeX-1){
        cout << "memory error\n";
        exit(1);
    }
    if(j < 0 || j>sizeY-1){
        cout << "memory error\n";
        exit(1);
    }
    return p[i*sizeY + j];
}

char array2::get(int i, int j){
    if(i < 0 || i>sizeX-1){
        cout << "memory error\n";
        exit(1);
    }
    if(j < 0 || j>sizeY-1){
        cout << "memory error\n";
        exit(1);
    }
    return p[i*sizeY + j];
}

int main(){
    array2 a(10,10);

    a.put(2,3) = 'P';
    a.put(3,2) = 'A';

    cout << a.get(2,3) << a.get(3,2) <<'\n';

    return 0;
}


