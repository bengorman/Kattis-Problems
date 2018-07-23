//
//  main.cpp
//  simplicity
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;
    int charFreqArr[26] = {0};
    for(int i = 0; i < str.length(); i++) {
        charFreqArr[int(str[i]) - 97]++;
    }
    sort(begin(charFreqArr), end(charFreqArr));
    int sum = 0;
    for(int i = 0; i < 24; i++) {
        sum += charFreqArr[i];
    }
    cout << sum;
    return 0;
}
