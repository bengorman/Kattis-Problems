//
//  main.cpp
//  wizardOfOdds
//
//  Created by Ben Gorman on 6/12/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;
    unsigned long long k;
    cin >> k;
    cout << log2(n) << " " << k << endl;
    if(log2(n) <= k) {
        cout << "Your wish is granted!";
    } else {
        cout << "You will become a flying monkey!";
    }
    
    return 0;
}
