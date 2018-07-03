//
//  main.cpp
//  aListGame
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if(n == 2 || n == 3) {
        return true;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 2; i <= n; i++) {
        if(isPrime(n)) {
            sum++;
            break;
        }
        if(n % i == 0 && isPrime(i)) {
            sum++;
            n /= i;
            i--;
        }
    }
    cout << sum;
    return 0;
}
