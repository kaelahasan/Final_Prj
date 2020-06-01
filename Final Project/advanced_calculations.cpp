//
//  advanced_calculations.cpp
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/31/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//

#include <stdio.h>

int power(int a, int x){
    int ans = 1;
    for(int i =0; i<x; i++){
        ans*=a;
    }
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

int absolute_value(int n){
    if(n<=0){
        return n;
    }
    else{
        return -1*n;
    }
}
