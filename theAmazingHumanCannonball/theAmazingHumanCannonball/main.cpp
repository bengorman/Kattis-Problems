//
//  main.cpp
//  theAmazingHumanCannonball
//
//  Created by Ben Gorman on 6/19/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

#define PI 3.14159265358979

using namespace std;

int main() {
    int n;
    cin >> n;
    double v;
    double theta;
    double x;
    double h1;
    double h2;
    for(int i = 0; i < n; i++) {
        cin >> v >> theta >> x >> h1 >> h2;
        double y = x * tan(theta * PI / 180.0) - 4.905 * pow(x / (v * cos(theta * PI / 180.0)), 2.0);
        if(y - h1 < 1) {
            cout << "Not Safe" << endl;
        } else if(h2 - y < 1) {
            cout << "Not Safe" << endl;
        } else {
            cout << "Safe" << endl;
        }
    }
    return 0;
}
