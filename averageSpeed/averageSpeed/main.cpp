//
//  main.cpp
//  averageSpeed
//
//  Created by Ben Gorman on 6/27/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    string line;
    double totalHour = 0, totalMin = 0, totalSec = 0;
    double dist = 0;
    double speed = 0;
    while(cin && cin.peek() != '\n' && getline(cin, line)) {
        double currentHour = stod(line.substr(0, 2));
        double currentMin = stod(line.substr(3, 2));
        double currentSec = stod(line.substr(6, 2));
        dist += speed * (currentHour - totalHour);
        dist += speed * (currentMin - totalMin) / 60.0;
        dist += speed * (currentSec - totalSec) / 3600.0;
        totalHour = currentHour;
        totalMin = currentMin;
        totalSec = currentSec;
        if(line.length() > 8) {
            speed = stod(line.substr(9));
        } else {
            cout << line << " " << dist << " km\n";
        }
    }
    return 0;
}
