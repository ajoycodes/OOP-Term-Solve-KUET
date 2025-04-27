#include <iostream>
using namespace std;

    class Result {
        string course_code;
        string course_outcome;

        public:
        Result():course_code("Unknown"), course_outcome("Unknown"){};
        Result (string code, double outcome): course_code(code), course_outcome(to_string(outcome)){};
        Result (string code, int outcome): course_code(code), course_outcome(to_string(outcome)){};
        Result (string code, string outcome): course_code(code), course_outcome(outcome){};

        void getResult(){
            cout<< "Course Code: "<< course_code << " " << "Course Outcome: " <<course_outcome << endl;
        }

    };


int main (){

    Result r1("1203", 4.0);
    Result r2("1204", 3);
    Result r4 ("1206", "A+");
    Result r3;

    r1.getResult();
    r2.getResult();
    r3.getResult();
    r4.getResult();

    

    return 0;
}