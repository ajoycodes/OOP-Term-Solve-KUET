#include "ComplexNumber.h"
#include <iostream>
using namespace std;

class ComplexNumber{
    int real;
    int img;
    public:
    ComplexNumber(int r, int i):real(r), img(i){}

    ComplexNumber operator+(ComplexNumber&obj){
        return  ComplexNumber(real + obj.real, img + obj.img);
    }
    void display(){
        cout<< real << " + " << img << "i" << endl;
    };
};

