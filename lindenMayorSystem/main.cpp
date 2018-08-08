//
//  main.cpp
//  lindenMayorSystem
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> ruleMap;
    for(int i = 0; i < n; i++) {
        string key, arrow, value;
        cin >> key >> arrow >> value;
        ruleMap[key] = value;
    }

    string root;
    cin >> root;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < root.length(); j++) {
            string c = string(1, root[j]);
            if(ruleMap.count(c) > 0) {
                root.replace(j, 1, ruleMap[c]);
                j += (ruleMap[c].length() - 1);
            }
        }
    }
    cout << root;

    return 0;
}
