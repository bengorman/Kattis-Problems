//
//  main.cpp
//  baseTwoPalindromes
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> nextNums(vector<int> oldVec) {
    vector<int> newVec(oldVec.size() * 2 + 1);
    for(int i = 0; i < oldVec.size(); i++) {
        newVec[i] = oldVec[i] * 2;
    }
    newVec[oldVec.size()] = 6;
    for(int i = oldVec.size() + 1; i < newVec.size(); i++) {
        newVec[i] = newVec[i - oldVec.size() - 1];
    }
    return newVec;
}

int main() {
    int n;
    cin >> n;
    vector<int> palVec = {1, 3, 5, 7, 9, 15, 17};
    if(n <= 7) {
        cout << palVec[n - 1] << endl;
        return 0;
    }
    int currentNum = palVec.back();
    vector<int> nextVec1 = {4, 6, 4};
    vector<int> nextVec0 = {12, 6, 12};
    bool vecChoose = 1;
    int i = 7;
    while(i < n) {
        vector<int> myVec = vecChoose ? nextVec1 : nextVec0;
        for(int j = 0; j < myVec.size() && i < n; j++, i++) {
            currentNum += myVec[j];
        }
        if(!(i < n)) { break; }
        vecChoose = (vecChoose + 1) % 2;
        if(vecChoose) {
            nextVec1 = nextNums(nextVec1);
            nextVec0 = nextNums(nextVec0);
        }
        currentNum += 2;
        i++;
    }
    cout << currentNum << endl;
    return 0;
}
