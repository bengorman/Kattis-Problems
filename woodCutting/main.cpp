//
//  main.cpp
//  woodCutting
//
//  Created by Ben Gorman on 7/16/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <numeric>

using namespace std;

int main() {
    cout << setprecision(6) << fixed;
    int t;
    cin >> t;
    while(t > 0) {
        int n;
        cin >> n;
        vector<int> timeVec;
        for(int i = 0; i < n; i++) {
            timeVec.push_back(0);
            int w;
            cin >> w;
            for(int j = 0; j < w; j++) {
                double temp;
                cin >> temp;
                timeVec[i] += temp;
            }
        }
        sort(timeVec.begin(), timeVec.end());
        double avg = 0;
        double sum = 0;
        for(int i = 0; i < n; i++) {
            sum += timeVec[i];
            avg += sum;
        }
        avg /= (double)n;
        cout << avg << endl;
        
        t--;
    }
    
    return 0;
}
