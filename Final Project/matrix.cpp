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
    for(int k =0; k < col_size; k++){
        sum.m.push_back(vector<double> (col_size));
    }
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            sum.m[i][j]= m[i][j]+x.m[i][j];
        }
    }
    return sum;
}

matrix matrix::operator - (matrix& x){
    matrix diff(row_size, col_size);
    for(int k =0; k < col_size; k++){
        diff.m.push_back(vector<double> (col_size));
    }
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            diff.m[i][j]= m[i][j]-x.m[i][j];
        }
    }
    return diff;
}

matrix matrix::operator * (matrix& x){
    matrix mult(row_size, x.col_size);
    for(int k =0; k < col_size; k++){
        mult.m.push_back(vector<double> (col_size));
    }
    for(int i = 0; i<col_size; i++){
        for(int j =0; j< row_size; j++){
            for (int k =0; k<col_size; k++){
                mult.m[i][j]+= m[i][k]*x.m[k][j];
            }
        }
    }
    return mult;
}

matrix matrix::transpose(){
    matrix t(col_size, row_size);
    for(int k =0; k < col_size; k++){
        t.m.push_back(vector<double> (col_size));
    }
    for(int i = 0; i<t.col_size; i++){
        for(int j = 0; j<t.row_size; j++){
            t.m[i][j] = m[j][i];
        }
    }
    return t; 
}
double matrix::determinant(){
        return (m[1][1]*m[2][2]) - (m[1][2]*m[2][1]);
}

matrix matrix::inverse(){
    matrix i(2,2);
    for(int k =0; k < col_size; k++){
        i.m.push_back(vector<double> (col_size));
    }
    if(determinant() == 0.0){
        cout << "This matrix is not invertible";
        exit(0); //fix this condition
    }
    else{
        double a = 1.0/determinant();
        i.m[1][1] = a*m[2][2];
        i.m[1][2] = a*-1*m[1][2];
        i.m[2][1] = a*=1*m[2][1];
        i.m[2][2] = a*m[1][1];
        return i;
            
    }
    
}

void matrix::print_both(ostream &fout){

    for(int i = 0; i<col_size; i++){
        cout << "|";
        fout << "|";
        for(int j = 0; j<row_size; j++){
            cout << m[i][j];
            fout << m[i][j];
            if(j!=row_size-1){
                cout << "   ";
                fout << "   ";
            }
        }
        cout << "|";
        fout << "|";
        if(i!=col_size -1){
            cout << "\n";
            fout << "\n";
        }
    }
    
}


