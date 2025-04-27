#include <iostream>
using namespace std;

class Rectangle{

    public:
    int length;
    int width;

    Rectangle(int l, int w): length(l), width(w){};

    virtual void area(){
        cout<<length*width<<endl;
    }

};

class Triangle : public Rectangle {public:
    int height;
    
    Triangle(int l, int w, int h): Rectangle(l, w), height(h){};
    void area(){
        cout<<.5*width*height<<endl;
    }

};

int main() {

    Rectangle * r = new Triangle(9,5,4);
    r->area();
    dynamic_cast<Triangle*>(r)->height=2;
    r->area();

    

    return 0;
}
