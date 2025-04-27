#include <iostream>
using namespace std;

class CopyExample {
    public:
        int * data;
    
        CopyExample (int value){
            data = new int(value);
        }

        //Copy Constructor
        CopyExample (const CopyExample& source){
            //data = source.data; // Shallowcopy
            data = new int(*source.data);
        }
};

int main(){
    CopyExample original(42);
    CopyExample Copy = original;

    *Copy.data = 100;

    cout<< *original.data << endl;
    cout<< *Copy.data << endl;
}