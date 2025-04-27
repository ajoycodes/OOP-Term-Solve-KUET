    #include <iostream>
    using namespace std;

    int f(int x) throw(){
        if(x==1) {
            throw 1;
            }
        else
            {
            throw 0;
            }
        return 0;
    }

    int main() {
    
        try{f(1);
        }
        catch(int){
            cout<<"Exception type: integer is detected\n" <<endl;
        }

        return 0;
    }
