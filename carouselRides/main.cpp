//
//  main.cpp
//  carouselRides
//
//  Created by Ben Gorman on 8/7/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cfloat>
#include <limits>

using namespace std;

int main() {
    int n, m;
    while(cin >> n >> m && !(n == 0 && m == 0)) {
        double minCost = DBL_MAX;
        double minA = -1;
        double minB = -1;
        for(int i = 0; i < n; i++) {
            double a, b;
            cin >> a >> b;
            double cost = b / a;
            if(a <= m && cost <= minCost) {
                if(cost < minCost || (cost == minCost && a > minA)) {
                    minCost = cost;
                    minA = a;
                    minB = b;
                }
            }
        }
        if(minCost < DBL_MAX) {
            cout << "Buy " << minA << " tickets for $" << minB << endl;
        } else {
            cout << "No suitable tickets offered" << endl;
        }
    }
    return 0;
}
