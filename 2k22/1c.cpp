#include <iostream>
using namespace std;

class Complex{
    float real;
    float img;
    public:
        Complex (float r, float i): real(r), img(i){};

        Complex operator++ (){
            real++;
            return *this;
        }

        Complex operator++ (int){
            ++img;
            return *this;
        }

        void display (){
            cout<< real << " + "<< img << "i" << endl;
        }

};

int main (){

    Complex c1(2,3);
    c1.display();
    ++c1;
    c1.display();
    c1++;
    c1.display();
    


    return 0;
}