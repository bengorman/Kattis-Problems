//
//  main.cpp
//  chartingProgress
//
//  Created by Ben Gorman on 8/7/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string line;
    while(getline(cin, line) && line != "") {
        vector<int> freqVec;
        int cols = line.length();
        int freq = 0;
        for(int i = 0; i < line.length(); i++) {
            if(line[i] == '*') {
                freq++;
            }
        }
        freqVec.push_back(freq);
        while(getline(cin, line) && line != "") {
            int freq = 0;
            for(int i = 0; i < line.length(); i++) {
                if(line[i] == '*') {
                    freq++;
                }
            }
            freqVec.push_back(freq);
        }
        int progress = 0;
        for(int i = 0; i < freqVec.size(); i++) {
            int numAst = freqVec[i];
            int numDots = cols - numAst - progress;
            for(int j = 0; j < numDots; j++) {
                cout << '.';
            }
            for(int j = 0; j < numAst; j++) {
                cout << '*';
            }
            for(int i = 0; i < progress; i++) {
                cout << '.';
            }
            progress += numAst;
            cout << endl;
        }
    }
    return 0;
}
