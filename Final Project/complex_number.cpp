#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "complex_number.h"

complex_number complex_number::operator + (complex_number& x){
    double sum_of_a = a + x.a;
    double sum_of_b = b + x.b;
    complex_number sum (sum_of_a, sum_of_b);
    return sum;
}

complex_number complex_number::operator - (complex_number& x){
    double difference_of_a = a - x.a;
    double difference_of_b = b - x.b;
    complex_number difference (difference_of_a, difference_of_b);
    return difference;
}

complex_number complex_number::operator * (complex_number& x){
    double real = a*x.a - b*x.b;
    double imag = b*x.a + a*x.b;
    complex_number product (real, imag);
    return product;
}

complex_number complex_number::operator / (complex_number& x){
    double real = ( a*x.a + b*x.b )/( x.a*x.a + x.b*x.b );
    double imag = ( b*x.a - a*x.b )/( x.a*x.a + x.b*x.b );
    complex_number quotient (real,imag);
    return quotient;
}
