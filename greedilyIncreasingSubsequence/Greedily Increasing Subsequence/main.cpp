//
//  main.cpp
//  Greedily Increasing Subsequence
//
//  Created by Ben Gorman on 6/4/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int  n;
    cin >> n;
    vector<int> vec;
    int j = 0;
    int temp;
    cin >> temp;
    vec.push_back(temp);
    for(int i = 1; i < n; i++) {
        cin >> temp;
        if(temp > vec[j]) {
            vec.push_back(temp);
            j++;
        }
    }
    
    cout << vec.size();
    cout << '\n';
    for(int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        cout << ' ';
    }
    
    return 0;
}
