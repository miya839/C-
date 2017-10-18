#include<iostream>
using namespace std;

class build{
    int floor;
    int room;
    int square;
    public:
        build(int a,int b,int c){
            floor = a;
            room = b;
            square = c;
        }
};

class house : public build{
    int bedroom;
    int busroom;
    public:
        house(int a,int b,int c,int d,int e) : build(a,b,c){
            bedroom = d;
            busroom = e;
        }
};

class office : public build{
    int extinguisher;
    int phone;
    public:
        office(int a, int b, int c, int d, int e): build(a,b,c){
            extinguisher = d;
            phone = e;
        }

};


int main(){
    house ob1(1,2,3,4,5);
    office ob2 (6,5,4,3,2);

    return 0;
}


