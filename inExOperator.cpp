#include <iostream>
using namespace std;

class Complex{
    public:
    int real;
    int img;
    Complex (){

    }
    //Insertion Operator
    friend ostream& operator<< (ostream & out, Complex& c){
        out<< c.real << " + " << c.img << "i";
        return out;
    }

    //Extration Operator
    friend istream& operator>> (istream& in, Complex& c) {
        cout<< "Enter Real Part: ";
        in>> c.real;
        cout<< "Enter Img Part: ";
        in>> c.img;
        return in;
    }

    void display(){
        cout<< "Complex Number: " << real << "+" << img <<"i" << endl;
    }
};


int main(){

    Complex c1;
    cin>> c1;
    cout<<c1 << endl;


    return 0;

}