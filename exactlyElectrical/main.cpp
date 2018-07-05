/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int charge;
    cin >> charge;
    switch(((abs(x1 - x2) + abs(y1 - y2)) % 2 == charge % 2) && abs(x1 - x2) + abs(y1 - y2) <= charge) {
        case 1 :
            cout << "Y";
            break;
        case 0:
            cout << "N";
            break;
    }
    return 0;
}
