//
//  main.cpp
//  beatTheSpread
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(--n >= 0) {
        int s, d;
        cin >> s >> d;
        if(s % 2 != d % 2 || d > s) {
            cout << "impossible" << endl;
            continue;
        }
        cout << ceil(s/2.0) + d/2 << " " << s/2 - d/2 << endl;
    }
    return 0;
}
