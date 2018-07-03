//
//  main.cpp
//  infiniteSlides
//
//  Created by Ben Gorman on 6/13/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

double distP(double t, double w) {
    return (t+sin(t)-sin(t-w)-2*w) / sqrt(pow(2*w-t, 2) + pow(sin(t-w)-sin(t), 2) + pow(1+cos(t-w)-cos(t), 2));
}

int main() {
    double w;
    cin >> w;
    double time;
    for(double t = 2 * w - 1; t< 2 * w + 1; t+= 0.0001) {
        if(distP(t,w) < 0.0001 && distP(t,w) > -0.0001) {
            time = t;
        }
    }
    double ans = sqrt(pow(1+cos(time-w)-cos(time), 2) + pow(sin(time-w)-sin(time), 2) + pow(2*w-time, 2));
    cout << ans;
    return 0;
}
