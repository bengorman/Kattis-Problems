//
//  main.cpp
//  basicRemains
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int b, m;
    string p;
    while(cin >> b && b != 0) {
        cin >> p >> m;
        if(b != 10) {
            //convert p and m to dec
        }
        int mLength = (int)log10((double)m) + 1;
        long modSum = 0;
        p += ' ';
        for(int i = p.length() - mLength - 1; i > 0; i -= (mLength + 1)) {
            modSum += stol(p.substr(i, i + mLength + 1)) % m;
        }
        cout << modSum % m;
    }
    return 0;
}
