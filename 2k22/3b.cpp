#include <iostream>
using namespace std;

    template <typename T>

    void exceptionHandler(T c){
        throw c;
    }

int main (){

    

        try{
            exceptionHandler('a'-0);
        }
        catch(char c){
            cout<< "Caught a character \n";
            cout<<c<< endl;
        }
        catch(int x){
            cout<< "Caught an integer \n";
            cout<<x<< endl;
        }
        catch(double d){
            cout<< "Caught a double \n";
            cout<<d<< endl;
        }
    
    return 0;
}

//Output: Caught an integer