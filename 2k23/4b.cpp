#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void replaceBlankSpace(const string& inputFile, const string& outputFile){
    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if(!inFile || !outFile){
        cout<< "Error" << endl;
    }

    string line;
    bool spaceLineSequence = false;

    while(getline(inFile, line)){
        for(char& ch: line){
            if(ch== ' '){
                if(!spaceLineSequence){
                    outFile.put(' ');
                    spaceLineSequence = true;
                }
            }else{
                outFile.put(ch);
                spaceLineSequence = false;
            }
        }
        outFile.put('\n');
    }

}

int main() {
    replaceBlankSpace("input1.txt", "output1.txt");
    cout << "Processing complete. Output saved to output.txt" << endl;
    return 0;
}
