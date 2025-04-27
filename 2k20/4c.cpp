#include <iostream>
using namespace std;

class A {
public:
    int a;
    A() {
        cout << "A" << endl;
    }
};

class B : virtual public A {  // Virtual inheritance to avoid multiple instances of A
    int b;
public:
    B() {
        cout << "B" << endl;
    }
};

class C : public B {  // Inherit B normally here (no ambiguity from B)
public:
    int c;
    C() {
        cout << "C" << endl;
    }
};

class D : virtual public A {  // Virtual inheritance to avoid multiple instances of A
    int d;
public:
    D() {
        cout << "D" << endl;
    }
};

class E : public B {  // No need for virtual inheritance here
    int e;
public:
    E() {
        cout << "E" << endl;
    }
};

class F : virtual public B, virtual public C {  // Inherit B and C normally here
    int f;
public:
    F() {
        cout << "F" << endl;
    }
};

class G : virtual public C, virtual public D {  // Inherit C and D normally here
    int g;
public:
    G() {
        cout << "G" << endl;
    }
};

class H : public E, public F {  // Inherit E and F normally here
    int h;
public:
    H() {
        cout << "H" << endl;
    }
};

class I : public F, public G {  // Inherit F and G normally here
    int i;
public:
    I() {
        cout << "I" << endl;
    }
};

class J : public H, public I {  // Inherit H and I normally here
    int j;
public:
    J() {
        cout << "J" << endl;
    }
};

int main() {
    J x;  // This will print constructors in order based on hierarchy
    I y;  // This will also print constructors for I's hierarchy

    x.a = 0;  // Accessing member `a` of class A, unambiguous due to virtual inheritance
    y.c = 0;  // Accessing member `c` of class C, unambiguous in this setup

    return 0;
}
