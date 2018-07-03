//
//  main.cpp
//  reseto
//
//  Created by Ben Gorman on 6/12/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    
    vector<int> numVec;
    for(int i = 2; i <= n; i++) {
        numVec.push_back(i);
    }
    int currentPrime = 2;
    int counter = 0;
    while(counter < k) {
        for(int i = 0; i < numVec.size(); i++) {
            if(numVec[i] % currentPrime == 0) {
                //cout << "found: " << numVec[i] << endl;
                counter++;
                if(counter == k) {
                    cout << numVec[i];
                    return 0;
                }
                numVec.erase(numVec.begin() + i);
                i--;
            }
        }
        currentPrime = numVec[0];
    }
    
    return 0;
}
