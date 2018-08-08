//
//  main.cpp
//  allDifferentDirections
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <cmath>
#include <utility>

#define PI 3.141592653589793

using namespace std;

double findDist(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    int n;
    while(cin >> n && n != 0) {
        cin.ignore();
        pair<double, double>* destinations = new pair<double, double>[n];
        double xAvg = 0;
        double yAvg = 0;
        for(int i = 0; i < n; i++) {
            string line;
            getline(cin, line);
            istringstream iss(line);
            double x, y, theta;
            iss >> x >> y;
            string command;
            iss >> command >> theta;
            while(iss >> command) {
                if(command == "walk") {
                    double dist;
                    iss >> dist;
                    x += dist * cos(theta * PI / 180);
                    y += dist * sin(theta * PI / 180);
                } else if(command == "turn") {
                    double turnTheta;
                    iss >> turnTheta;
                    theta += turnTheta;
                }
            }
            destinations[i].first = x;
            destinations[i].second = y;
            xAvg += x;
            yAvg += y;
        }
        xAvg /= n;
        yAvg /= n;
        double maxDist = 0;
        for(int i = 0; i < n; i++) {
            double dist = findDist(destinations[i].first, destinations[i].second, xAvg, yAvg);
            if(dist > maxDist) {
                maxDist = dist;
            }
        }
        cout << xAvg << " " << yAvg << " " << maxDist << endl;
    }
    return 0;
}
