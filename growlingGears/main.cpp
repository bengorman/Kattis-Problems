//
//  main.cpp
//  growlingGears
//
//  Created by Ben Gorman on 6/25/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++) {
        int n;
        cin >> n;
        double a, b, c;
        double maxGearTorque = 0;
        int maxGear = -1;
        for(int j = 1; j <= n; j++) {
            cin >> a >> b >> c;
            double maxRPM = b / (2 * a);
            double maxTorque = -1 * a * pow(maxRPM, 2.0) + b * maxRPM + c;
            if(maxTorque > maxGearTorque) {
                maxGearTorque = maxTorque;
                maxGear = j;
            }
        }
        cout << maxGear << endl;
    }
    
    return 0;
}
