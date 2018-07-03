//
//  main.cpp
//  paradoxWithAverages
//
//  Created by Ben Gorman on 6/12/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for(int t = 0; t < testCases; t++) {
        int numCs;
        cin >> numCs;
        int numEcon;
        cin >> numEcon;
        
        double csAvg = 0;
        double econAvg = 0;
        double csArr[numCs];
        double econArr[numEcon];
        
        for(int i = 0; i < numCs; i++) {
            cin >> csArr[i];
            csAvg += csArr[i];
        }
        csAvg /= numCs;
        
        for(int i = 0; i < numEcon; i++) {
            cin >> econArr[i];
            econAvg += econArr[i];
        }
        econAvg /= numEcon;
        
        int ans = 0;
        for(double n : csArr) {
            if(n < csAvg && n > econAvg) {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
