//
//  main.cpp
//  sidewaysSorting
//
//  Created by Ben Gorman on 8/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool comp(string a, string b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return a < b;
}

int main() {
    int r, c;
    while(cin >> r >> c && (r != 0 || c != 0)) {
        vector<string> charPointerVec;
        for(int i = 0; i < c; i++) {
            string s = "";
            charPointerVec.push_back(s);
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                char ch;
                cin >> ch;
                charPointerVec[j].push_back(ch);
            }
        }
        stable_sort(charPointerVec.begin(), charPointerVec.end(), comp);
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cout << charPointerVec[j][i];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
