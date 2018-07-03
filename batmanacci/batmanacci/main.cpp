//
//  main.cpp
//  batmanacci
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string fib(int n) {
    string f[n+2];
    int i;
    f[1] = "N";
    f[2] = "A";
    for(i = 3; i <= n; i++) {
        f[i] = f[i-2] + f[i-1];
    }
    return f[n];
}

int main() {
    int n;
    long long int k;
    cin >> n >> k;
    cout << fib(n)[k+1];
    return 0;
}
