//
//  main.cpp
//  icpcTeamSelection
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> scoreVec;
        for(int j = 0; j < n * 3; j++) {
            int temp;
            cin >> temp;
            scoreVec.push_back(temp);
        }
        int sum = 0;
        sort(scoreVec.begin(), scoreVec.end());
        for(int j = 0; j < n; j++) {
            scoreVec.pop_back();
            scoreVec.erase(scoreVec.begin());
            sum += scoreVec.back();
            scoreVec.pop_back();
        }
        cout << sum << endl;
    }
    return 0;
}
