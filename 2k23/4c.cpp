#include <iostream>
#include<cassert>
using namespace std;

class Polygon{
    
    public:
    virtual void area()=0;
    virtual void name()=0;
};

class Rectangle: public Polygon {
    int height;
    int width;
    public: 
        Rectangle(int h, int w) : height(h), width(w){};
        void area(){
            cout<< "Area of Rectangle: "<<height*width << endl;
        }
        void name(){
            cout<< "It is a Rectangle" << endl;
        }

        
};

class Triangle: public Polygon  {
    int height;
    int width;
    public: 
        Triangle(int h, int w) : height(h), width(w){};
        void area(){
            cout<< "Area of Triangle: "<<.5*height*width << endl;
        }
        void name(){
            cout<< "It is a Triangle" << endl;
        }
};

class Square: public Polygon   {
    int side;
    public: 
        Square(int s) : side(s){};
        void area(){
            cout<< "Area of Square: "<<side*side << endl;
        }
        void name(){
            cout<< "It is a Square" << endl;
        }
};

void showdetails(Polygon* p){
        p->area();
        p->name();
};

int main (){

    Polygon* p = new Square(5);
    showdetails(p);

    return 0;
}