//
//  main.cpp
//  ballBearings
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.141592653589793238462

using namespace std;

int main() {
    int t;
    cin >> t;
    cout << setprecision(0) << fixed;
    while(t > 0) {
        double ringDiam, ballDiam, space;
        cin >> ringDiam >> ballDiam >> space;
        double i = 1;
        double rollDiam = ringDiam - ballDiam;
        while(i++) {
            double ballCenterDist = rollDiam * cos((i-2) * PI / i / 2);
            if(ballCenterDist < ballDiam + space) {
                i--;
                break;
            }
        }
        cout << i << endl;
        t--;
    }
    return 0;
}
