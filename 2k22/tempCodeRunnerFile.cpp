#include <iostream>
using namespace std;
#include <fstream>


class Student{
    public:
        string name;
        int roll;
        double cg;
public:
        Student(){};

        

        friend ostream& operator<< (ostream& out, Student& s){
            out<<"Name: " << s.name << " Roll: "<< s.roll<< " CG: "<< s.cg<< endl;
            return out;
        }

        friend istream& operator>> (istream& in, Student& s){
            cout<< "Enter your name: ";
            in>>s.name;
            cout<<  "Enter your roll: ";
            in>>s.roll;
            cout<<  "Enter your cg: ";
            in>> s.cg;
            return in;
        }
};

int main (){

    ifstream in("input.txt");
    ofstream out("output.txt");
    if(!in){
        cout<< "Error opening Input" << endl;
    }
    if(!out){
        cout<< "Error opening Output" << endl;
    }

    Student s;
    cin>>s;
    cout<<s;

    in>>s;
    out<<s;

    in.close();
    out.close();

    return 0;
}