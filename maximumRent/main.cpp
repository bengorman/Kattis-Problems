//
//  main.cpp
//  maximumRent
//
//  Created by Ben Gorman on 7/16/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, m, s;
    cin >> a >> b >> m >> s;
    int x = s - m;
    int y = 2 * m - s;
    if(x < 1) {
        y -= (1 - x);
        x = 1;
    }
    int max = 0;
    int temp;
    while(y >= 1) {
        temp = a * x + b * y;
        if(temp > max) {
            max = temp;
        }
        x++;
        y--;
    }
    cout << max;
    
    return 0;
}
