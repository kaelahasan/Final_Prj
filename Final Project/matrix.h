#ifndef matrix_h
#define matrix_h

#include <iostream>
#include <vector>
using namespace std;


class matrix{
public:
    matrix(){
        row_size = 0;
        col_size = 0;
    }
    matrix(int r, int c);
    matrix(int r, int c, vector<vector<double>> _m);
    void print_both(ostream &fout); 
    matrix operator + (matrix& x);
    matrix operator - (matrix& x);
    matrix operator * (matrix& x);
    matrix transpose();
    double determinant();
    matrix inverse();
private:
    int row_size;
    int col_size;
    vector<vector<double>> m;
};

#endif /* matrix_h */
