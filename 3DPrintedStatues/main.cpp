//
//  main.cpp
//  3DPrintedStatues
//
//  Created by Ben Gorman on 6/4/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    double m = double(n);
    cout << ceil(log2(m)) + 1;
    
    return 0;
}
