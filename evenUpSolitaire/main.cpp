/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cardVec;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if(cardVec.size() > 0) {
            if(temp % 2 != cardVec[cardVec.size() - 1] % 2) {
                cardVec.push_back(temp);
            } else {
                cardVec.pop_back();
            }
        } else {
            cardVec.push_back(temp);
        }
    }

    cout << cardVec.size();
    return 0;
}
