#include <iostream>
#include "ComplexNumber.h"
#include "Matrix.h"
using namespace std;
int main(){
    Matrix <ComplexNumber> mat1 (
        ComplexNumber(1,2),
        ComplexNumber(1,2),
        ComplexNumber(1,2),
        ComplexNumber(1,2)
    );
    Matrix <ComplexNumber> mat2 (
        ComplexNumber(2,2),
        ComplexNumber(2,2),
        ComplexNumber(2,2),
        ComplexNumber(2,2)
    );

    Matrix <ComplexNumber> result = mat1 + mat2;
    result.display();
    return 0;

}