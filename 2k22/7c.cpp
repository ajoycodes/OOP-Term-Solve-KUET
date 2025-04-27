#include <iostream>
using namespace std;

class Animal{
    public: 
    virtual void treat () = 0;
};
class Cat: public Animal {
    public:
    void treat(){
        cout<< "Cat"<< endl;
    }
};
class Dog: public Animal {
    public:
    void treat(){
        cout<< "Dog"<< endl;
    }
    void bark(){
        cout<< "Woof"<< endl;
    }
};

void treatAnimal (Animal *p){
    p->treat();
}



int main (){

    Animal *a = new Dog();
    treatAnimal (a);

    return 0;
}