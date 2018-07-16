//
//  main.cpp
//  theCalculusOfAda
//
//  Created by Ben Gorman on 7/16/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> differentiate(vector<int> vec) {
    int n = vec.size();
    if(n == 1 || equal(vec.begin()+1, vec.end(), vec.begin())) {
        pair<int, int> p;
        p.first = 0;
        p.second = vec[0];
        return p;
    } else {
        vector<int> newVec;
        for(int i = 0; i < n-1; i++) {
            newVec.push_back(vec[i+1] - vec[i]);
        }
        pair<int, int> p(differentiate(newVec));
        p.first++;
        p.second += vec[n - 1];
        return p;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> originVec;
    int temp;
    while(cin.peek() != '\n' && cin >> temp) {
        originVec.push_back(temp);
    }
    pair<int, int> ansPair = differentiate(originVec);
    cout << ansPair.first << " " << ansPair.second << endl;
    return 0;
}
