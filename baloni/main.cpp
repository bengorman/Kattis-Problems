//
//  main.cpp
//  baloni
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> foundVec;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        bool newArrow = true;
        for(int j = 0; j < foundVec.size(); j++) {
            if(temp == foundVec[j] - 1) {
                newArrow = false;
                foundVec.erase(foundVec.begin() + j);
                break;
            }
        }
        foundVec.push_back(temp);
        if(newArrow) {
            sum++;
        }
    }
    cout << sum;
    
    
    return 0;
}
