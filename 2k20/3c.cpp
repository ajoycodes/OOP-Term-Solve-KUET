#include <iostream>
#include <cmath>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    Complex(int r, int i): real(r), img(i){};

    Complex operator*(Complex& c1){
        return Complex(real*c1.real, img*c1.img);
    }

    Complex operator++(){
        ++real;
        ++img;
        return *this;
    }

    Complex operator++(int){
        real++;
        img++;
        return *this;
    }

    void display(){
        cout<< real << " + " << img << "i"<< endl;;
    }

};

int main(){
    Complex c1(3,5), c2(4,6);
    c1.display();
    c2.display();
    Complex c3 = c1*c2;
    c3.display();
    Complex c4 = ++c3;
    c4.display();
    Complex c5 = c4++;
    c5.display();
 
    return 0;

}