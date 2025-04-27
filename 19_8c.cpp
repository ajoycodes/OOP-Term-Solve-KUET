#include <iostream>
#include <cmath>
using namespace std;

class TwoD{

    public:
    int x; int y;
        TwoD (int xVal, int yVal) : x(xVal), y(yVal){}
};

class ThreeD : public TwoD {

    public:
    int z;
    ThreeD(int xVal, int yVal, int zVal): TwoD(xVal, yVal), z(zVal){};

    void display(){
        cout<< "X: "<< x << " Y: "<< y <<" Z: "<<z;
    }
};


int main(){

    ThreeD one(2, 3, 4);
    ThreeD two(3, 4, 5);
    one.display();

    int finalX = (two.x - one.x) * (two.x-one.x);
    int finalY = (two.y - one.y) * (two.y-one.y);
    int finalZ = (two.z - one.z) * (two.z-one.z);

    float Distance = sqrt(finalX + finalY + finalZ);
    cout<<"Distance: " << Distance << endl;
    return 0;

}