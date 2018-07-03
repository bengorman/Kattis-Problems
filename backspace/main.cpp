//
//  main.cpp
//  backspace
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    vector<char> charVec;
    for(int i = 0; i < line.length(); i++) {
        if(line[i] == '<') {
            charVec.pop_back();
        } else {
            charVec.push_back(line[i]);
        }
    }
    for(int i = 0; i < charVec.size(); i++) {
        cout << charVec[i];
    }
    return 0;
}
