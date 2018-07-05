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

bool reverseSort(int i, int j) { return (i>j); }

int main() {
    long n;
    cin >> n;
    vector<int> priceVec;
    int temp;
    for(long i = 0; i < n; i++) {
        cin >> temp;
        priceVec.push_back(temp);
    }
    sort(priceVec.begin(), priceVec.end(), reverseSort);
    long i = 2;
    long sum = 0;
    for(i = 2; i < n; i += 3) {
        sum += priceVec[i];
    }
    cout << sum;
    return 0;
}
