/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>

using namespace std;

int main() {
    int w, n;
    cin >> w >> n;
    int wTemp, lTemp;
    int area = 0;
    for(int i = 0; i < n; i++) {
        cin >> wTemp >> lTemp;
        area += wTemp * lTemp;
    }
    cout << area / w;
    return 0;
}
