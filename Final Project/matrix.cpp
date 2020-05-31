#include <stdio.h>
#include <vector>
#include "matrix.h"
using namespace std;

matrix::matrix(int r, int c){
    row_size = r;
    col_size = c;
    vector<vector<double>> _m;
    m = _m; 
}

matrix::matrix(int r, int c, istream& stream){
    row_size = r;
    col_size = c;
    double n;
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            stream >> n;
            m[i][j] = n;
        }
    }
}

matrix matrix::operator + (matrix& x){
    matrix sum(row_size, col_size);
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            sum.m[i][j]= m[i][j]+x.m[i][j];
        }
    }
    return sum;
}

matrix matrix::operator - (matrix& x){
    matrix diff(row_size, col_size);
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            diff.m[i][j]= m[i][j]-x.m[i][j];
        }
    }
    return diff;
}

matrix matrix::operator * (matrix& x){
    matrix mult(row_size, x.col_size);
    double temp = 0.0;
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            temp = 0.0;
            for (int k =0; k<col_size; k++){
                temp+= m[i][j]*x.m[i][j];
            }
            mult.m[i][j] = temp;
        }
    }
    return mult;
}

