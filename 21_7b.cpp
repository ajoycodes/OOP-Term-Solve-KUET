#include <iostream>
using namespace std;

class Base {
    public: int b; 
    virtual void display(){
        cout<<"Base \n";
    }
};

class Derived: public Base {
    public: int d;
    void display(){
        cout << "Derived" ;
    }
};

int main(){
    Base *bp;
    Derived d;
    bp = &d;
    bp->b=2;
    dynamic_cast<Derived*>(bp)->d=3;
    
    bp->display();

    return 0;

}