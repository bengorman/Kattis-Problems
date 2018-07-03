//
//  main.cpp
//  anagramCounting
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <set>
#include <iomanip>

using namespace std;

long double factorial(long double n) {
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
    string line;
    while(cin >> line) {
        set<char> charSet;
        for(int i = 0; i < line.length(); i++) {
            charSet.insert(line[i]);
        }
        int dif = line.length() - charSet.size();
        /*
        long double num = pow(2, dif);
        num = 1.0 / num;
        cout << num << endl;
        */
        long double num = factorial((long double)line.length() - 1);
        cout << setprecision(0) << fixed << num << endl;
        num /= pow(2, dif);
        num *= (long double)line.length();
        cout << setprecision(0) << fixed << num << endl;
        
    }
    return 0;
}
