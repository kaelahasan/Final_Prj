//
//  factors.h
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/31/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//

#ifndef factors_h
#define factors_h

#include <iostream>
using namespace std;

class factor {
public:
    factor(int num);
    vector<int> get_factors();
    int gcf(factor fac); 
private:
    vector<int> f;
    int n; 
    
};

#endif /* factors_h */
