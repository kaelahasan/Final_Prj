#ifndef fraction_h
#define fraction_h

#include <iostream>
#include <fstream>
using namespace std;

class fraction
{
public:
    fraction(){
        num = 1;
        denom = 1;
    }
    fraction(int n, int d){
        num = n;
        if (d==0){
            cout << "Error: Attempting to Divide by Zero" << endl;
            exit(0);
        }
        else{
            denom = d;
        }
    }
    fraction operator + (fraction& x);
    fraction operator - (fraction& x);
    fraction operator * (fraction& x);
    fraction operator / (fraction& x);
    void print();
    void f_print(ostream &fout);
    void print_both(ostream &fout);
    int gcd(int n, int d);
private:
    int num;
    int denom;
};
#endif /* fraction_h */
