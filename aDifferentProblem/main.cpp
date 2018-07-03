//
//  main.cpp
//  aDifferentProblem
//
//  Created by Ben Gorman on 5/30/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long a;
    long long b;
    while(cin >> a) {
        cin >> b;
        
        long long result = a - b;
        if(result < 0) {
            result *= -1;
        }
        cout << result;
        cout << "\n";
    }
    return 0;
}
