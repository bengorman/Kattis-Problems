//
//  main.cpp
//  platforme
//
//  Created by Ben Gorman on 6/25/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Platform {
    int y, x1, x2;
    Platform(int y_, int x1_, int x2_) : y(y_), x1(x1_), x2(x2_) {}
};

bool comp(Platform p1, Platform p2) {
    return (p1.y < p2.y);
}

int main() {
    int n;
    cin >> n;
    vector<Platform> platVec;
    int maxX2 = 0;
    for(int i = 0; i < n; i++) {
        int y, x1, x2;
        cin >> y >> x1 >> x2;
        Platform plat(y, x1, x2);
        platVec.push_back(plat);
        if(x2 > maxX2) {
            maxX2 = x2;
        }
    }
    sort(platVec.begin(), platVec.end(), comp);
    int maxPlatformArr[maxX2];
    for(int i = 0; i < maxX2; i++) {
        maxPlatformArr[i] = 0;
    }
    int sum = 0;
    for(int i = 0; i < platVec.size(); i++) {
        sum += platVec[i].y - maxPlatformArr[platVec[i].x1];
        sum += platVec[i].y - maxPlatformArr[platVec[i].x2 - 1];
        for(int j = platVec[i].x1; j < platVec[i].x2; j++) {
            maxPlatformArr[j] = platVec[i].y;
        }
    }
    cout << sum;
    
    return 0;
}
