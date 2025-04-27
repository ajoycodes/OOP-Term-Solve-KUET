#include <iostream>
using namespace std;

class Counter{
    int val;

    public:
        Counter (int x){
            val =x;
        }

        //Prefix
         Counter operator++(){
            ++val;
            return *this;
         }
         
         //Postfix
         Counter operator++(int){
            val++;
            return *this;
         }
         
         void Display(){
            cout<< "Value: " << val << endl;
         }

};



int main(){

    Counter c(2);
    Counter d(5);
    
    d.Display();
    c.Display();

    return 0;

}