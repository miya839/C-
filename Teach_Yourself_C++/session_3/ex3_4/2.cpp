#include<iostream>
using namespace std;

class truck;

class car{
    int pass;
    int speed;
    public:
    car(int p, int s) {pass = p; speed = s;}
    int sp_greater(truck t);
};

class truck{
    int weight;
    int speed;
    public:
    truck(int w, int s) { weight = w; speed = s;}
    friend int car::sp_greater(truck t);
};

int car::sp_greater(truck t){
    return speed - t.speed;
}

int main(){
    int t;
    car c1(6,55), c2(2,120);
    truck t1(10000, 55), t2(20000, 72);

    cout << "c1 compare t1: \n";
    t = c1.sp_greater(t1);
    if(t<0) cout << "track more faster\n";

    else if(t==0) cout << "same speed\n";
    else cout << "car more faster\n";

    cout << "\nc2 compare t2: \n";
    t = c2.sp_greater(t2);
    if(t<0) cout << "track more faster\n";

    else if(t==0) cout << "same speed\n";
    else cout << "car more faster\n";


    return 0;
}


