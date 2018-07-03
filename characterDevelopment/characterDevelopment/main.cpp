//
//  main.cpp
//  characterDevelopment
//
//  Created by Ben Gorman on 6/12/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n;
    cin >> n;
    cout << fixed;
    cout << setprecision(0);
    cout << pow(2.0, n) - n - 1;
    return 0;
}
