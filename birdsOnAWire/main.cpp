/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int l, d, n;
    cin >> l >> d >> n;
    vector<int> birdVec;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        birdVec.push_back(temp);
    }
    sort(birdVec.begin(), birdVec.end());
    int pos = 6;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(birdVec[i] - pos >= d) {
            sum++;
            pos += d;
            i--;
        } else {
            pos = birdVec[i] + d;
        }
    }
    while(l - 6 - pos >= 0) {
        sum++;
        pos += d;
    }
    cout << sum;

    return 0;
}
