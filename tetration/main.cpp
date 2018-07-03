//
//  main.cpp
//  tetration
//
//  Created by Ben Gorman on 6/5/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n;
    cin >> n;
    cout << setprecision(6) << fixed;
    cout << pow(n, 1 / n);
    
    return 0;
}
