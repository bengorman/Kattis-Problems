//
//  main.cpp
//  rationalArithmetic
//
//  Created by Ben Gorman on 7/16/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if(a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        long long x1, y1, x2, y2;
        char op;
        cin >> x1 >> y1 >> op >> x2 >> y2;
        long long num, denom;
        if(op == '*' || op == '/') {
            if(op == '/') {
                long long temp = x2;
                x2 = y2;
                y2 = temp;
            }
            num = x1 * x2;
            denom = y1 * y2;
        } else {
            denom = y1 * y2;
            x1 *= y2;
            x2 *= y1;
            num = (op == '+' ? x1 + x2 : x1 - x2);
        }
        bool positive = (num > 0 && denom > 0) || (num < 0 && denom < 0);
        num = num > 0 ? num : num * -1;
        denom = denom > 0 ? denom : denom * -1;
        long long gcd_val = gcd(num, denom);
        num /= gcd_val;
        denom /= gcd_val;
        if(num == 0 || denom == 0) {
            cout << "0 / 1" << endl;
        } else {
            cout << (positive ? "" : "-") << num << " / " << denom << endl;
        }
    }
    return 0;
}
