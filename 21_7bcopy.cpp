#include <iostream>
using namespace std;

class A {
    public:
    A(){
        cout<< " A Constructor "<< endl;
    }
    ~A(){
        cout<< " A Destructor " << endl;
    }
};

class B : public A {
    public:
        B() {
            cout << "B Constructor " << endl;
        }
        ~B() {
            cout << "B Destructor" << endl;
        }
};

class C: public B {
    public: 
     C() {
            cout << "C Constructor " << endl;
        }
        ~C() {
            cout << "C Destructor" << endl;
        }
     
};


int main(){
    A *a;
    a=new C;
    delete a;

    return 0;

}