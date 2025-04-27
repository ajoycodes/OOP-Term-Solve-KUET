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
        cerr << "Error opening the file" << endl;
    }

    string line;
    int total = 0;

    while(getline(inFile, line)){
        istringstream iss(line);
        int price1;
        int price2;
        iss >> price1 >> price2;

        total = price1+ price2;
        outFile<< total << endl;
    }
    inFile.close();
    outFile.close();



    return 0;

}
