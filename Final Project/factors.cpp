//
//  factors.cpp
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/31/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include "factors.h"



factor::factor(int num){
    n = num;
    for(int i = 1; i<=num; i++){
        if (num % i == 0){
            f.push_back(i);
        }
    }
}

vector<int> factor::get_factors(){
    
    return f;
}

int factor:: gcf(factor fac){
    vector<int> common;
    for(int i = 0; i < f.size(); i++){
        for(int j = 0; j< fac.f.size(); j++){
            if (fac.f[j] == f[i]){
                common.push_back(fac.f[j]);
            }
        }
    }
    sort(common.begin(), common.end()); //sorts common factors low to high
    reverse(common.begin(), common.end()); //sorts common factors high to low
    return common[0]; //greatest common factor 
}
