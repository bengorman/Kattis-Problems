//
//  main.cpp
//  anotherCandies
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        unsigned long long int sum = 0;
        unsigned long long int temp;
        for(int j = 0; j < n; j++) {
            cin >> temp;
            sum += (temp % n);
        }
        if(sum % n == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
