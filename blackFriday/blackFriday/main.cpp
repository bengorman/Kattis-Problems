//
//  main.cpp
//  blackFriday
//
//  Created by Ben Gorman on 6/5/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    vector<int> vecCopy(vec);
    
    bool duplicate;
    int i = 0;
    int maxNum = 0;
    while(i < vec.size()) {
        duplicate = false;
        int j = i + 1;
        while(j < vec.size()) {
            if(vec[i] == vec[j]) {
                duplicate = true;
                vec.erase(vec.begin() + j);
            }
            else {
                j++;
            }
        }
        if(duplicate) {
            vec.erase(vec.begin() + i);
        } else {
            if(vec[i] > maxNum) {
                maxNum = vec[i];
            }
            i++;
        }
    }
    if(maxNum == 0) {
        cout << "none";
    } else {
        for(int k = 0; k < n; k++) {
            if(vecCopy[k] == maxNum) {
                cout << k + 1;
                return 0;
            }
        }
    }
    return 0;
}
