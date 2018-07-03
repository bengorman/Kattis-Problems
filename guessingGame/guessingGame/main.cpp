//
//  main.cpp
//  guessingGame
//
//  Created by Ben Gorman on 6/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    string response;
    string compare;
    cin >> n;
    while(n != 0) {
        cin >> response;
        cin >> compare;
        vector<int> highVec;
        vector<int> lowVec;
        int highVecMin = 11;
        int lowVecMax = -1;
        while(true) {
            int ans;
            if(response == "too") {
                if(compare == "high") {
                    highVec.push_back(n);
                    if(n < highVecMin) {
                        highVecMin = n;
                    }
                } else if(compare == "low") {
                    lowVec.push_back(n);
                    if(n > lowVecMax) {
                        lowVecMax = n;
                    }
                }
            } else if(response == "right"){
                ans = n;
                if(n <= lowVecMax || n >= highVecMin) {
                    cout << "Stan is dishonest" << endl;
                } else {
                    cout << "Stan may be honest" << endl;
                }
                break;
            }
            cin >> n;
            cin >> response;
            cin >> compare;
        }
        cin >> n;
    }
    
    return 0;
}
