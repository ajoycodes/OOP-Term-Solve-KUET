#include <iostream>
using namespace std;
    class TimeHM{
        public:
        int hour;
        int minute;
        TimeHM(int h, int m): hour(h), minute(m){};

    };

    class TimeMS{
        public:
        int minute;
        int second;
        TimeMS(int m, int s): minute(m), second(s){};

    };

    void convertHMtoMS(TimeHM& obj1, TimeMS& obj2){
        
        obj2.minute = obj2.minute + (obj1.hour*60) + obj1.minute;
        cout<< "Minute:" << obj2.minute << "Second: "<< obj2.second;
    }


int main (){
    TimeHM obj1(1,30);
    TimeMS obj2(30,60);
    convertHMtoMS(obj1, obj2);

    return 0;
}