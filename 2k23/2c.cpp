#include <iostream>
#include<cassert>
using namespace std;

int divide(int x, int y){
    assert(y!=0);
    return x/y;
}

int main (){

    divide(2,0);


    return 0;
}