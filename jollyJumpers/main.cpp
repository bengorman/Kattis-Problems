//
//  main.cpp
//  jollyJumpers
//
//  Created by Ben Gorman on 8/7/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string line;
    while(getline(cin, line) && line != "" && line != "\n") {
        set<int> difs;
        istringstream iss(line);
        int n, lastNum, currentNum;
        iss >> n >> lastNum;
        while(iss >> currentNum) {
            difs.insert(abs(currentNum - lastNum));
            lastNum = currentNum;
        }
        bool jolly = 1;
        for(int i = 1; i < n; i++) {
            if(!difs.count(i)) {
                jolly = 0;
                break;
            }
        }
        if(jolly) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }
    return 0;
}
