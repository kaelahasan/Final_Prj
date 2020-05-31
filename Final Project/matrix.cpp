#include <stdio.h>
#include "matrix.h"
using namespace std;

matrix::matrix(int r, int c){
    row_size = r;
    col_size = c;
    m = NULL; 
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
    //declare sum matrix
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            sum.m[i][j]= m[i][j]+x.m[i][j];
        }
    }
    return sum;
}

matrix matrix::operator - (matrix& x){
    //declare diff matrix
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            diff.m[i][j]= m[i][j]-x.m[i][j];
        }
    }
    return diff;
}

