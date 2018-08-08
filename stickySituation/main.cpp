//
//  main.cpp
//  stickySituation
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int n;
    cin >> n;
    vector<long long int> stickVec(n);
    for(int i = 0; i < n; i++) {
        cin >> stickVec[i];
    }
    sort(stickVec.begin(), stickVec.end());
    for(int i = 2; i < n; i++) {
        if(stickVec[i-2] + stickVec[i-1] > stickVec[i]) {
            cout << "possible";
            return 0;
        }
    }
    cout << "impossible";
    return 0;
}
