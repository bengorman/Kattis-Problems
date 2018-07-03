//
//  main.cpp
//  happyHappyPrimePrime
//
//  Created by Ben Gorman on 6/20/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int m) {
    bool p = true;
    for(int i = 2; i < m/2; i++) {
        if(m % i == 0) {
            p = false;
            break;
        }
    }
    return p;
}

bool isHappy(int m) {
    vector<int> usedNums;
    usedNums.push_back(m);
    string mStr = to_string(m);
    if(m == 1) {
        return 1;
    }
    int sum = 0;
    cout << endl;
    for(int i = 0; i < mStr.length(); i++) {
        cout << " " << mStr.substr(i, i+1) << endl;
        sum += pow(1.0 * stoi(mStr.substr(i, i+1)), 2.0);
    }
    cout << sum << endl;
    if(find(usedNums.begin(), usedNums.end(), sum) != usedNums.end()) {
        cout << "found repeated value: " << sum << endl;
        return 0;
    }
    return isHappy(sum);
}

bool isHappyPrime(int m) {
    if(isPrime(m)) {
        if(isHappy(m)) {
            return 1;
        }
        cout << "prime, not happy" << endl;
    } else {
        cout << "not prime" << endl;
    }
    return 0;
}

int main() {
    int p;
    cin >> p;
    for(int i = 0; i < p; i++) {
        int caseNum;
        cin >> caseNum;
        cout << caseNum << ' ';
        int m;
        cin >> m;
        cout << m << ' ';
        /*
        if(isHappyPrime(m)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }*/
        cout << to_string(m).substr(0,1);
    }
    return 0;
}
