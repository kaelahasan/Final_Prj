#ifndef fraction_h
#define fraction_h

#include <iostream>
#include <fstream>
using namespace std;

class fraction
{
public:
    fraction(){
        a = 1;
        b = 1;
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
    friend ostream &operator<<(ostream &fout, const fraction &x);
    fraction operator + (fraction& x);
    fraction operator - (fraction& x);
    fraction operator * (fraction& x);
    fraction operator / (fraction& x);
    int gcd(int n, int d);
private:
    int num;
    int denom;
}
#endif /* fraction_h */
