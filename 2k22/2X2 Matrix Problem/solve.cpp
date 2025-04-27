#include <iostream>
#include "ComplexNumber.h"
#include "Matrix.h"
using namespace std;


int main(){
    Matrix<Complex> mat1(
        {
            {Complex(1,2), Complex(1,2)},
            {Complex(1,2), Complex(1,2)}
        }
    );
    Matrix<Complex> mat2(
        {
            {Complex(1,2), Complex(1,2)},
            {Complex(1,2), Complex(1,2)}
        }
    );
    Matrix<Complex> mat3 = mat1 + mat2;
    mat3.display();
    return 0;
}
