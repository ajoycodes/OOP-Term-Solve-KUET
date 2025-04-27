#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include<sstream>
using namespace std;

class Person{
    char name[80];
    short age;
    public:
    void getData(){
        cout<< "Enter name: "; cin>> name;
        cout<< "Enter age: "; cin>> age; 
    }   
    void showData(){
        cout<< "Enter name: "<< name<< endl;
        cout<< "Enter age: "<< age << endl; 
    }   

};

int main(){
 
    Person pers;


    ifstream inFile("Output2.bin",ios::binary);
    inFile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    pers.showData();

    return 0;

}