#include<iostream>
#include<ctime>

using namespace std;

/*class timer {
    clock_t start;
    public:
        timer();
        ~timer();
};

timer::timer(){
    start = clock();
    cout << "経過時間: " << (end -start) / CLOCKS_PER_SEC << '\n';
}

timer::~timer(){
    clock_t end;
    end = clock();
    cout << "経過時間: " << (end -start) / CLOCKS_PER_SEC << '\n';
}
*/
class stopwatch{
    clock_t begin,end;
    public:
        stopwatch();
        ~stopwatch();
        void start();
        void stop();
        void show();
};

stopwatch::stopwatch(){
    begin = end = 0.0;
}

stopwatch::~stopwatch(){
    clock_t end;
    end = clock();
    cout << "経過時間: " << (end -begin) / CLOCKS_PER_SEC << '\n';
}

void stopwatch::start(){
    begin = (double)clock()/ CLOCKS_PER_SEC;
}

void stopwatch::stop(){
    end = (double)clock() / CLOCKS_PER_SEC;
}

void stopwatch::show(){
    end = clock();
    cout << "経過時間: " << (end -begin) << '\n';
}





int main(){
    /*timer ob;
    char c;

    cout << "最後が[ENTER]になるようにキーを入力: " ;
    cin >> c;
*/

    stopwatch ob;
    char c;

    while(true){
        cout << "start:s stop:t show:u end:x";
        cin >> c;
        if(c == 's') ob.start();
        if(c == 'u') ob.show();
        if(c == 'x') break;
    }

    return 0;
}
