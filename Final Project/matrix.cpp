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

matrix::matrix(int r, int c, vector<vector<double>> _m){
    row_size = r;
    col_size = c;
    m = _m; 
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

matrix matrix::transpose(){
    matrix t(col_size, row_size);
    for(int i = 0; i<t.col_size; i++){
        for(int j = 0; j<t.row_size; j++){
            t.m[i][j] = m[j][i];
        }
    }
    return t; 
}
double matrix::determinant(){
    if(row_size == 2 && col_size == 2){
        return (m[1][1]*m[2][2]) - (m[1][2]*m[2][1]);
    }
    else{
        cout << "This is only for 2 by 2 matrices.";
        exit(0);
    }
}

matrix matrix::inverse(){
    matrix i(2,2);
    if(row_size == 2 && col_size == 2){
        double a = 1.0/determinant();
        i.m[1][1] = a*m[2][2];
        i.m[1][2] = a*-1*m[1][2];
        i.m[2][1] = a*=1*m[2][1];
        i.m[2][2] = a*m[1][1];
        return i;
            
    }
    else{
        cout << "This is only for 2 by 2 matrices."; 
        exit(0); //fix this condition
    }
}

void matrix::print(){
    cout << "___";
    for(int k = 0; k<col_size; k++){
        cout << "   ";
    }
    cout << "___"; 
    for(int i = 0; i<col_size; i++){
        for(int j = 0; j<row_size; j++){
            cout << m[i][j];
        }
        cout << endl << "|";
    }
    cout << "___";
    for(int k = 0; k<col_size; k++){
        cout << "   ";
    }
    cout << "___";
}

