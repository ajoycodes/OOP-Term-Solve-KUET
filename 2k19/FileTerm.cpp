#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include<sstream>
using namespace std;

int main(){
 
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");

    if(!inFile || !outFile){
        cerr<< "Error" << endl;
    }

    string line;
    int total = 0;

    while (getline(inFile, line))
    {
         istringstream iss(line);
         string item_name;
         int price;

         iss>>item_name>> price;

         total= total + price;
    }
    
    outFile<< "Total: " << total << endl;

    inFile.close();
    outFile.close();
    
    return 0;

}