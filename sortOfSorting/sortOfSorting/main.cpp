//
//  main.cpp
//  sortOfSorting
//
//  Created by Ben Gorman on 6/19/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(string s1, string s2) {
    if(s1.substr(0, 2) < s2.substr(0, 2)) {
        return true;
    } else if(s1.substr(0, 2) > s2.substr(0, 2)) {
        return false;
    } else {
        if(s1.substr(0, 2) < s2.substr(0, 2)) {
            return true;
        } else if(s1.substr(0, 2) > s2.substr(0, 2)) {
            return false;
        }
        else {
            return false;
        }
    }
}

int main() {
    int n;
    cin >> n;
    while(n != 0) {
        vector<string> vec = {};
        for(int i = 0; i < n; i++) {
            string tempStr;
            cin >> tempStr;
            vec.push_back(tempStr);
        }
        stable_sort(vec.begin(), vec.end(), comp);
        for(string s : vec) {
            cout << s << endl;
        }
        cin >> n;
        if(n != 0) {
            cout << endl;
        }
    }
    return 0;
}
