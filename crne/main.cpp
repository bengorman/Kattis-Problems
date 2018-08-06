//
//  main.cpp
//  crne
//
//  Created by Ben Gorman on 8/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    unsigned long long pieces = 1;
    int adder = 1;
    for(int i = 0; i < n; i++) {
        pieces += adder;
        if(i % 2 == 0) {
            adder++;
        }
    }
    cout << pieces << endl;
    return 0;
}
