#include <stdio.h>
#include "fraction.h"

int fraction:: gcd (int n, int d){
    int remainder;
    while (d != 0){
        remainder = n%d;
        n = d;
        d = remainder;
    }
    return n;
}

fraction fraction::operator + (fraction& x){
    int n = (num*x.denom)+(x.num*denom);
    int d = denom*x.denom;
    return fraction(n/gcd(n,d), d/gcd(n,d));
    
}

fraction fraction::operator - (fraction& x){
    int n = (num*x.denom)-(x.num*denom);
    int d = denom*x.denom;
    return fraction(n/gcd(n,d), d/gcd(n,d));
    
}

fraction fraction::operator * (fraction& x){
    int n = num*x.num;
    int d = denom*x.denom;
    return fraction(n/gcd(n,d), d/gcd(n,d));
    
}

fraction fraction::operator / (fraction& x){
    int n = num*x.denom;
    int d = denom*x.num;
    return fraction(n/gcd(n,d), d/gcd(n,d));
    
}
