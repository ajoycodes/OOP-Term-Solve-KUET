#ifndef MATRIX_H
#define MATRIX_H

template <typename T>

class Matrix{
    array<array(T,2),2> mat;

    public:
    Matrix(T a11, T a12, T a21, T a22){
        mat[0][0] = a11;
        mat[0][1] = a12;
        mat[1][0] = a21;
        mat[1][1] = a22;
    }

    Matrix operator+ (Matrix& obj){
        return Matrix(
            mat[0][0] + obj.mat[0][0],
            mat[0][1] + obj.mat[0][1]
            mat[1][0] + obj.mat[1][0]
            mat[1][1] + obj.mat[1][1]
        );
    }
    void display() {
        for(int i=0; i<2; i++){
            for (int j=0; j<2 ; j++){
                cout<< mat[i][j];
            }
            cout<<" "<< endl;
        }
    }
};


#endif