//
//  main.cpp
//  timeTravellingTemperatures
//
//  Created by Ben Gorman on 6/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    //n = Yn + X
    //n = X/(1 - Y)
    double x;
    cin >> x;
    double y;
    cin >> y;
    
    cout << setprecision(7) << fixed;
    if(y == 1) {
        if(x == 0) {
            cout << "ALL GOOD";
        } else {
            cout << "IMPOSSIBLE";
        }
    } else {
        cout << x/(1 - y);
    }
    return 0;
}
