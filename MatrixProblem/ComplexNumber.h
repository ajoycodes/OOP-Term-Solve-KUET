#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
using namespace std;
class ComplexNumber{
    int real;
    int img;
    public:
    ComplexNumber(int r, int i);
    ComplexNumber operator+(ComplexNumber&obj);
    void display();
};

#endif