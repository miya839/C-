#include<iostream>
using namespace std;



class dist{
    public:
        double d;
        dist(double x){d = x;}
        virtual void trav_time(){
            cout << d / 60.0 << '\n';
        }
};

class metric : public dist{
    public:
        metric(double x) : dist(x){}
        void trav_time(){
            cout << d / 100.0 << '\n';
        }
};

int main(){

    dist ob1(100,200);
    metric ob2(2000,1000);

    ob1.trav_time();
    ob2.trav_time();


    return 0;
}


