#include <iostream>
using namespace std;

class A {
    public: 
    A(){
        cout<< "A co";
    }
    ~A(){
        cout<<"A de";
    }
};

class B : public A {
    public:
    B(){
        cout<< "B con";
    }
    ~B(){
        cout<< "B de";
    }
}
;

class C : public B {
    public:
    C(){
        cout<< "C con";
    }
    ~C(){
        cout<< "C de";
    }
};
    
int main (){

   A * a;
   a= new C;
   delete a;


    return 0;
}

//A co
//B co
//C co
//A de