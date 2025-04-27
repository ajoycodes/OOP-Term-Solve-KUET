#include <iostream>
using namespace std;

class A {
    public:
        A(){cout<<"_1";}
        A(A&obj){cout <<" 2 ";}
};

class B: virtual public A {
    public:
        B(){cout<<" 3 ";}
        B(B&obj){cout <<" 4 ";}
};

class C: virtual public A {
    public:
        C(){cout<<" 5 ";}
        C(C&obj){cout <<" 6 ";}
};

class D: public B, public C {
    public:
        D(){cout<<" 7 ";}
        D(D&obj){cout <<" 8 ";}
};

int main(){

    D d1;
    D d(d1);

    //_1 3 5 7 2 4 6 8
    
    
    
    return 0;
}