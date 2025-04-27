#include <iostream>
using namespace std;

class A{
    public:
        virtual void fun()=0;

};

class B: public A {
    public: void fun(){
        cout<< "B fun" << endl;
    }
};

class C: public B {

};

class D: public A {
    void fun(){

    };
};

int main (){
    A*P;
    B b;
    C c;
    D d;
    P = &c;
    P->fun();
    P = &d;
    P->fun();

    return 0;
}