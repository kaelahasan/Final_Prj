//
//  advanced_calculations.cpp
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/31/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//

#include <stdio.h>

double power(double b, double x){
    double ans = 1;
    for(int i =0; i<x; i++){
        ans*=b;
    }
    return ans;
}
    
int factorial(int n){
    int f = 1;
    for(int i =1; i<=n; i++){
        f*= i;
    }
    return f;
}

int permutation(int n, int r){
   return factorial(n)/factorial(n-r);
}

int combination(int n, int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}

double absolute_value(double n){
    if(n<=0){
        return n;
    }
    else{
        return -1*n;
    }
}
