#include <iostream>
using namespace std;

int main(){
    int sec, hh, mm, ss;
    cout << "input second to transfer";
    cin >> sec;

    if(sec < 60){
        hh = 0;
        mm = 0;
        ss = sec;
    }
    else if(sec > 60 && sec < 3600){
        hh = 0;
        mm = sec / 60;
        ss = sec % 60;
    }
    else {
        hh = sec / 3600;
        mm = (sec % 3600) / 60;
        ss = sec % 60;
    }
    cout << hh << ":" << mm << ":" << ss;
    
    return 0;
}