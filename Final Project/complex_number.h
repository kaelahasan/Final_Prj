#ifndef complex_number_h
#define complex_number_h

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std; 

class complex_number {
public:
    complex_number(){
        a = 0;
        b = 0;
    }
    complex_number(double _a, double _b){
        a = _a;
        b = _b;
    }
    complex_number operator + (complex_number& x);
    complex_number operator - (complex_number& x);
    complex_number operator * (complex_number& x);
    complex_number operator / (complex_number& x);
    void print_both(ostream &fout);
private:
    double a;
    double b;
};

#endif /* complex_number_h */
