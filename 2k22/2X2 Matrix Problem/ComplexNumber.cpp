#include <iostream>
#include "ComplexNumber.h"
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex (int r, int i):real(r),img(i){};

    Complex operator+(Complex& obj){
        return Complex(real + obj.real, img + obj.img);
    }

    void display(){}


};
