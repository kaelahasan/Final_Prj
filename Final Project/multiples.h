//
//  multiples.h
//  Final Project
//
//  Created by Kaela Yasmin Hasan on 5/31/20.
//  Copyright © 2020 Kaela Yasmin Hasan. All rights reserved.
//

#ifndef multiples_h
#define multiples_h

#include <iostream>
#include <vector>
using namespace std;

class multiple{
public:
    multiple(int mult, int num);
    vector<int> get_multiples();
    int lcm(int l);
private:
    vector<int> m;
    int n;
    
};

#endif /* multiples_h */
