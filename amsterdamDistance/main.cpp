//
//  main.cpp
//  amsterdamDistance
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

#define PI 3.14159265358979323

using namespace std;

int main() {
    double m, n;
    double r;
    cin >> m >> n >> r;
    int aM, aN, bM, bN;
    cin >> aM >> aN >> bM >> bN;
    double difM = abs(aM - bM);
    double angle = (180.0 / m) * difM;
    if(angle < 360.0 / PI) {
        double angleDist = 2.0 * PI * (((double)min(aN, bN) / n) * r) * angle / 360.0;
        double radialDist = ((double)abs(aN-bN) / n) * r;
        cout << setprecision(7) << fixed << radialDist + angleDist;
    } else {
        cout << setprecision(7) << fixed << (aN / n) * r + (bN / n) * r;
    }
    return 0;
}
