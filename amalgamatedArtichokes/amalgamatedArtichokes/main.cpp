//
//  main.cpp
//  amalgamatedArtichokes
//
//  Created by Ben Gorman on 6/5/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <float.h>

using namespace std;

#define PI 3.14159265

double price(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main() {
    double p, a, b, c, d;
    int n;
    cin >> p >> a >> b >> c >> d >> n;
    
    double arr[n];
    for(int i = 1; i <= n; i++) {
        arr[i-1] = price(p, a, b, c, d, i);
    }
    double maxDecline = 0;
    double min = DBL_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
            }
        }
        if(arr[i] - min > maxDecline) {
            maxDecline = arr[i] - min;
        }
    }
    cout << setprecision(6) << fixed;
    cout << maxDecline;
    
    return 0;
}
