//
//  main.cpp
//  beehives
//
//  Created by Ben Gorman on 6/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct Point {
    double x, y;
    bool sour;
    Point(double x_, double y_, bool sour_) : x(x_), y(y_), sour(sour_) {}
};

int main() {
    double dist;
    cin >> dist;
    int n;
    cin >> n;
    while(dist != 0 && n != 0) {
        double x, y;
        vector<Point> pointArr;
        for(int i = 0; i < n; i++) {
            cin >> x;
            cin >> y;
            Point point(x, y, false);
            pointArr.push_back(point);
        }
        
        int sourCounter = 0;
        double currentDist;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                currentDist = sqrt(pow(abs(pointArr[i].x - pointArr[j].x), 2) + pow(abs(pointArr[i].y - pointArr[j].y), 2));
                if(currentDist < dist) {
                    pointArr[i].sour = true;
                    pointArr[j].sour = true;
                }
            }
            if(pointArr[i].sour) {
                sourCounter++;
            }
        }
        
        cout << sourCounter << " sour, ";
        cout << n - sourCounter << " sweet" << endl;
        
        cin >> dist;
        cin >> n;
    }
    
    return 0;
}
