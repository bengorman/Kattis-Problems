//
//  main.cpp
//  matrixInverse
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line1, line3;
    int c, d;
    int i = 0;
    while(getline(cin, line1) && line1 != "" && cin >> c >> d && cin.ignore() && ++i) {
        istringstream iss(line1);
        int a, b;
        iss >> a >> b;
        cout << "Case " << i << ":" << endl;
        double determinant = 1 / (double)((a * d) - (b * c));
        cout << (int)(d * determinant) << " " << (int)(-1 * b * determinant) << endl;
        cout << (int)(-1 * c * determinant) << " " << (int)(a * determinant) << endl;
        getline(cin, line3);
    }
    return 0;
}
