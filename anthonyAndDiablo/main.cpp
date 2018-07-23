//
//  main.cpp
//  anthonyAndDiablo
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

#define PI 3.14519265358979323

using namespace std;

int main() {
    double a, c;
    cin >> a >> c;
    if(pow(c, 2) / (4 * PI) >= a) {cout << "Diablo is happy!"; }
    else { cout << "Need more materials!"; }
    return 0;
}
