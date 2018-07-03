//
//  main.cpp
//  dartScoring
//
//  Created by Ben Gorman on 6/13/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
    Point(double x_, double y_) : x(x_), y(y_) {}
    bool operator == (Point p) {
        return (x == p.x) && (y == p.y);
    }
};

int main() {
    string line;
    getline(cin, line);
    while(line != "") {
        double buf;
        stringstream ss(line);
        vector<Point> pointVec;
        
        Point xMinPoint(31, 0);
        Point xMaxPoint(-31, 0);
        Point yMinPoint(0, 31);
        Point yMaxPoint(0, -31);
        while(ss >> buf) {
            double x = buf;
            ss >> buf;
            double y = buf;
            Point currentPoint(x, y);
            pointVec.push_back(currentPoint);
            if(currentPoint.x > xMaxPoint.x) {
                xMaxPoint = currentPoint;
            }
            if(currentPoint.x < xMinPoint.x) {
                xMinPoint = currentPoint;
            }
            if(currentPoint.y > yMaxPoint.y) {
                yMaxPoint = currentPoint;
            }
            if(currentPoint.y < xMinPoint.y) {
                yMinPoint = currentPoint;
            }
        }
        vector<Point> outsideVec;
        outsideVec.push_back(xMaxPoint);
        outsideVec.push_back(yMaxPoint);
        outsideVec.push_back(xMinPoint);
        outsideVec.push_back(yMinPoint);
        
        
        
        
        getline(cin, line);
    }
    return 0;
}
