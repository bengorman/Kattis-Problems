//
//  main.cpp
//  aquariumTank
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
    Point(int x_, int y_) : x(x_), y(y_) {}
};

bool comp(Point p1, Point p2) {
    if(p1.y != p2.y) {
        return p1.y < p2.y;
    }
    return p1.x < p2.x;
}

int main() {
    double n, d, l;
    cin >> n >> d >> l;
    l *= 1000;
    double fillArea = l / d;
    vector<Point> pointVec;
    int tempX;
    int tempY;
    for(int i = 0; i < n; i++) {
        cin >> tempX;
        cin >> tempY;
        Point myPoint(tempX, tempY);
        pointVec.push_back(myPoint);
    }
    sort(pointVec.begin(), pointVec.end(), comp);
    
    double otherSideSlope;
    Point baseLeft = pointVec[0];
    Point baseRight = pointVec[1];
    double currentHeight;
    for(int i = 2; i < n+1; i++) {
        Point currentPoint = pointVec[i];
        Point thisSideBase = (abs(currentPoint.x - baseRight.x) > abs(currentPoint.x - baseLeft.x)) ? baseLeft : baseRight;
        Point otherSideBase = (abs(currentPoint.x - baseRight.x) < abs(currentPoint.x - baseLeft.x)) ? baseLeft : baseRight;
        otherSideSlope = (pointVec[i+1].x - otherSideBase.x) / (pointVec[i+1].y - otherSideBase.y);
        Point otherPoint(otherSideBase.x + otherSideSlope * currentPoint.y, currentPoint.y);
        double currentArea = (currentPoint.y - baseLeft.y) * (abs(currentPoint.x - otherPoint.x) + abs(baseLeft.x - baseRight.x)) / 2.0;
        if(currentArea >= fillArea) {
            break;
        }
        currentHeight = currentPoint.y;
    }
    
    
    
    
    
    
    return 0;
}
