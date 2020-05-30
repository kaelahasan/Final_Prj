//
//  complex_number.h
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/30/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//


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
    friend ostream &operator<<(ostream &fout, const complex_number &x); 
    complex_number operator + (complex_number& x);
    complex_number operator - (complex_number& x);
    complex_number operator * (complex_number& x);
    complex_number operator / (complex_number& x);
private:
    double a;
    double b;
};

#endif /* complex_number_h */
