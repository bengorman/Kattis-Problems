//
//  main.cpp
//  pizzaCrust
//
//  Created by Ben Gorman on 6/12/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;



int main() {
    int r;
    cin >> r;
    int c;
    cin >> c;
    
    double pi = atan(1)*4;
    double cheeseRad = r - c;
    double cheeseArea = pi * pow(cheeseRad, 2);
    double totalArea = pi * pow(r, 2);
    
    cout << fixed << setprecision(6) << 100.0 * cheeseArea / totalArea;
    
    return 0;
}
