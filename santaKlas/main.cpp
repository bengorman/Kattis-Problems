//
//  main.cpp
//  santaKlas
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

#define PI 3.14159265358979323

using namespace std;

int main() {
    int h, theta;
    cin >> h >> theta;
    if(h == 0) {
        cout << 0;
    } else if(0 <= theta && theta <= 180) {
        cout << "safe";
    } else {
        cout << floor(-1 * h / sin(theta * (PI/180)));
    }
    return 0;
}
