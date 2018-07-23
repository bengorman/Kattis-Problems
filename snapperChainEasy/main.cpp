//
//  main.cpp
//  snapperChainEasy
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

bool hasPower(int n, vector<bool> onVec) {
    bool ans = 1;
    for(int i = 0; i < n; i++) {
        if(!onVec[i]) {
            ans = 0;
            break;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    int tIt = 0;
    while(++tIt <= t) {
        int n, k;
        cin >> n >> k;
        vector<bool> onVec(n, 0);
        for(int i = 0; i < k; i++) {
            for(int j = n - 1; j >= 0; j--) {
                if(hasPower(j, onVec)) {
                    onVec[j] = (onVec[j] + 1) % 2;
                }
            }
        }
        cout << "Case #" << tIt << ": " << (hasPower(n-1, onVec) && onVec[n-1] ? "ON" : "OFF") << endl;
    }
    return 0;
}
