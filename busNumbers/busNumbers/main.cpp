//
//  main.cpp
//  busNumbers
//
//  Created by Ben Gorman on 6/20/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> busVec;
    for(int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        busVec.push_back(temp);
    }
    sort(busVec.begin(), busVec.end());

    for(int i = 0; i < n; i++) {
        int start = i;
        while(i+1 < n && busVec[i] == busVec[i+1] - 1) {
            i++;
        }
        int end = i;
        switch(end - start) {
            case 0:
                cout << busVec[i] << ' ';
                break;
            case 1:
                cout << busVec[--i]<< ' ';
                break;
            default:
                cout << busVec[start] << '-' << busVec[end] << ' ';
                break;
        }
    }
    
    return 0;
}
