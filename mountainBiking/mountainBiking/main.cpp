//
//  main.cpp
//  mountainBiking
//
//  Created by Ben Gorman on 6/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592653589793238462643383279502884197169399375

using namespace std;

int main() {
    int n;
    cin >> n;
    double g;
    cin >> g;
    
    double distArr[n];
    double angleArr[n];
    double accelArr[n];
    for(int i = n - 1; i >= 0; i--) {
        cin >> distArr[i];
        cin >> angleArr[i];
        accelArr[i] = g * cos(angleArr[i] * PI / 180.0);
    }
    
    double vInitial = 0;
    double v;
    for(int i = n - 1; i >= 0; i--) {
        vInitial =  0;
        for(int j = i; j >= 0; j--) {
            v = sqrt(pow(vInitial, 2.0) + 2.0 * accelArr[j] * distArr[j]);
            vInitial = v;
        }
        cout << fixed << setprecision(6) << v << endl;
    }
    
    return 0;
}
