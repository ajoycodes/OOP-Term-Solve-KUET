#include <iostream>
using namespace std;

class Base{
    public:
        int b;
    virtual void display(){
        cout<<"Base" << endl;
    }
};


class Derived: public Base{
    public:
        int d;
    void display(){
        cout<<"Derived" << endl;
    }
};
int main() {
    Base * bp, b;
    Derived *dp, d;
    bp = &d;
    bp->b=2;
    dynamic_cast<Derived*>(bp)->d=3;
    bp->display();


    return 0;
}
