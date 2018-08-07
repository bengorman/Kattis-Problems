//
//  main.cpp
//  bits
//
//  Created by Ben Gorman on 8/7/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string line;
        getline(cin, line);
        int maxFreq = 0;
        for(int i = 0; i < line.length(); i++) {
            string binStr = bitset<32>(stoi(line.substr(0, i + 1))).to_string();
            int freq = count(binStr.begin(), binStr.end(), '1');
            if(freq > maxFreq) {
                maxFreq = freq;
            }
        }
        cout << maxFreq << endl;
    }
    return 0;
}
