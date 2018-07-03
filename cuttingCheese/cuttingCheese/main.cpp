//
//  main.cpp
//  cuttingCheese
//
//  Created by Ben Gorman on 6/20/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>

#define PI 3.14159265358979

using namespace std;

struct Hole {
    double vol, r, x, y, z;
    Hole(double r_, double x_, double y_, double z_) : r(r_), x(x_), y(y_), z(z_) {
        vol = PI * pow(r, 2.0);
    }
};

int main() {
    int numHoles;
    cin >> numHoles;
    int numSlices;
    cin >> numSlices;
    
    vector<Hole> holeVec;
    double totalCheeseVol = pow(100.0, 3.0);
    for(int i = 0; i < numHoles; i++) {
        double tempR, tempX, tempY, tempZ;
        cin >> tempR >> tempX >> tempY >> tempZ;
        tempR /= 1000.0;
        tempX /= 1000.0;
        tempY /= 1000.0;
        tempZ /= 1000.0;
        Hole tempHole(tempR, tempX, tempY, tempZ);
        totalCheeseVol -= tempHole.vol;
        holeVec.push_back(tempHole);
    }
    double volPerSlice = totalCheeseVol / (double)numSlices;
    
    
    
    
    
    
    
    
    
    return 0;
}
