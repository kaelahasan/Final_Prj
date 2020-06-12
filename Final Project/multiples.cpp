//
//  multiples.cpp
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/31/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//

#include <stdio.h>
#include "multiples.h"

multiple::multiple(int mult, int num){
    n = mult;
    for(int i =1; i<=num; i++){
        m.push_back(n*i);
    }
}

vector<int> multiple::get_multiples(){
    
    return m;
}

int multiple::lcm(int l){
    multiple m1(n, n*l);
    multiple m2(l, n*l);
    for(int i = 0; i<n*l; i++){
        for(int j =0; j<n*l; j++){
            if (m1.m[i] == m2.m[j]){
                return m1.m[i]; //first common multiple is LCM
            }
        }
    }
    return n*l; 
}
