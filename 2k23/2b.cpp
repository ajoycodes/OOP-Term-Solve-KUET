#include <iostream>
#include<cmath>
using namespace std;

class A {
    public:
    virtual void fun()=0;

};
class B:public A{
    public:
    void fun(){
        cout <<"B fun" << endl;
    }
};
class C : public B{
    
};
class D : public A{
    public:
    void fun(){
        cout<< "D fun" << endl;
    }
};

int main (){

    A *p;
    B b;
    C c;
    D d;

    p=&c;
    p->fun();
    p=&d;
    p->fun();

    return 0;
}