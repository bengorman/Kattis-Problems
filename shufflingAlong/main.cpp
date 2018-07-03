//
//  main.cpp
//  shufflingAlong
//
//  Created by Ben Gorman on 6/19/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int outShuffle(int n) {
    int bPos = 1;
    int i = 0;
    int modNum;
    if(n % 2 == 0) {
        modNum = n - 1;
    } else {
        modNum = n;
    }
    while(bPos != ceil(n/2.0)) {
        bPos = (2 * bPos) % modNum;
        i++;
    }
    return i + 1;
}

int inShuffle(int n) {
    int aPos = 0;
    int i = 0;
    int modNum;
    if(n % 2 == 0) {
        modNum = n + 1;
    } else {
        modNum = n;
    }
    while(aPos != n/2) {
        aPos = ((2 * (aPos + 1)) - 1) % modNum;
        i++;
    }
    return i + 1;
}

int main() {
    int n;
    cin >> n;
    string type;
    cin >> type;
    if(type == "out") {
        cout << outShuffle(n);
    } else {
        cout << inShuffle(n);
    }
    return 0;
}
