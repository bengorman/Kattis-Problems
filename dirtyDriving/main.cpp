//
//  main.cpp
//  dirtyDriving
//
//  Created by Ben Gorman on 8/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> carVec;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        carVec.push_back(temp);
    }
    sort(carVec.begin(), carVec.end());
    int minPos = carVec[carVec.size() - 1];
    for(int i = 0; i < n; i++) {
        int pos = carVec[i] - (i + 1) * p;
        if(pos < minPos) {
            minPos = pos;
        }
    }
    cout << carVec[0] - minPos;
 
    return 0;
}
