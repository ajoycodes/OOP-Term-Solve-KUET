#include <iostream>
#include <cmath>
using namespace std;

class Test{
    int t;
    public:
    Test():t(0){
        cout<< "e"<< endl;
    };
    ~Test(){
        cout<<"o"<<endl;
    }

};

int main(){

    Test t = Test();
    Test();
    t.~Test();

//eeooo
    return 0;

}