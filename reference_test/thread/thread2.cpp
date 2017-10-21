#include<iostream>
#include<thread>
#include<exception>
using namespace std;

void do_worker1(){
    for(int i=0;i<5;i++){
        cout << __PRETTY_FUNCTION__ << endl;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
}

void do_worker2(){
    for(int i=0;i<5;i++){
        cout << __FUNCTION__ << endl;
        this_thread::sleep_for(chrono::milliseconds(10));
    }
}

int main(int argc, char *argv[]){

    try{
        thread t1(do_worker1);
        thread t2(do_worker2);
        t1.join();
        t2.join();
    }catch(exception &ex){
        cerr << ex.what() << endl;
    }
    return 0;
}


