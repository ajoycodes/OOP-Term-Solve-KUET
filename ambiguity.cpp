#include <iostream>
using namespace std;

class A {
    public:
    void greet(){
        cout<<"Greet from A" << endl;
    }
};

class B : public A {
    public:
    void greet(){
        cout<<"Greet from B" << endl;
    }
};

class C : public A {
    public:
    void greet(){
        cout<<"Greet from C" << endl;
    }
};

class D : public B, public C {
    public:
    void greet(){
        cout<<"Greet from D" << endl;
    }
};

int main(){
    D d;
    d.greet();
    return 0;

}