#include <iostream>
#include<cmath>
using namespace std;
class Rectangle{};

class Polar{
    public:
    double radius;
    double theta;
    Polar(){};
    Polar(double r, double t): radius(r), theta(t){};

    Polar (Rectangle& obj1){
    radius = sqrt(obj1.xVal*obj1.xVal + obj1.yVal*obj1.yVal);
    theta = atan2(obj1.yVal, obj1.xVal);
    cout<< radius << ", " << theta;    
   
}
    
};

class Rectangle{
    public:
    double xVal;
    double yVal;
    Rectangle(){};
    Rectangle(double x, double y): xVal(x), yVal(y){};

    Rectangle(Polar& obj2 ){
    xVal = obj2.radius * cos(obj2.theta);
    yVal = obj2.radius * sin(obj2.theta);
    cout<< xVal << ", " << yVal;
    

};
    
};


int main (){

    Polar p1(5.0,1.57);
    Rectangle r1(1.0, 1.0);
    
    Polar p2(r1);
    


    return 0;
}