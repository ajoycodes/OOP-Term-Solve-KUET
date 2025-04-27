#include <iostream>
#include <cmath>
using namespace std;

class Point{
    public:
        double r;
        double theta;
    Point (double radius, double angle) {
        r=radius;
        theta = angle;
    }
    
    Point (float x, float y, float z){
        r= sqrt(x*x + y*y);
        theta = atan2(y, x);
    }
    
    void display(){
        cout<< "Radius: "<< r << endl;
        cout<< "Theta: "<< theta << endl;
    }
    
};

class Rectangle {
    public:
        double x;
        double y;
    Rectangle (double xVal, double yVal){
        x= xVal;
        y = yVal;
    }
    Rectangle (Point p){
        x = p.r * cos(p.theta);
        y = p.r * sin(p.theta);
        
    }
    
    void display(){
        cout<< "X : "<< x << endl;
        cout<< "Y : "<< y << endl;
    }
};

int main (){
    Point po(3, 1.57, 1);
    po.display();
    Rectangle rect(po);
    rect.display();
    
}