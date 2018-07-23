//
//  main.cpp
//  trollHunt
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int b, k, g;
    cin >> b >> k >> g;
    cout << ceil((b-1) / (double)(k/g));
    return 0;
}
