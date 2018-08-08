//
//  main.cpp
//  cetiri
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> intVec(3);
    cin >> intVec[0] >> intVec[1] >> intVec[2];
    sort(intVec.begin(), intVec.end());
    int dif1 = intVec[1] - intVec[0];
    int dif2 = intVec[2] - intVec[1];
    if(dif1 == dif2) {
        cout << intVec[2] + dif1;
    } else if(dif1 > dif2) {
        cout << intVec[0] + dif2;
    } else {
        cout << intVec[1] + dif1;
    }
    return 0;
}
