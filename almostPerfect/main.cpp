//
//  main.cpp
//  almostPerfect
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        cout << n << ' ';
        int sum = 1;
        for(int i = 2; i <= sqrt((double)n); i++) {
            if(n % i == 0) {
                sum += i;
                if(n / i != i) {
                    sum += n / i;
                }
            }
        }
        if(sum == n) {
            cout << "perfect" << endl;
        } else if(sum - 2 <= n && n <= sum + 2) {
            cout << "almost perfect" << endl;
        } else {
            cout << "not perfect" << endl;
        }
    }
    return 0;
}
