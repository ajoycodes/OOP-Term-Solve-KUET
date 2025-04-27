#include <iostream>
using namespace std;

    void fun(){
        unique_ptr <int> dynamicInt = make_unique<int>(5);
    };

int main (){

    while(1){
        fun();
    }

    return 0;
}