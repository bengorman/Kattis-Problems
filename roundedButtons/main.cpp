//
//  main.cpp
//  roundedButtons
//
//  Created by Ben Gorman on 6/25/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double x, y, w, h, r;
        cin >> x >> y >> w >> h >> r;
        int m;
        cin >> m;
        for(int j = 0; j < m; j ++) {
            double currentX, currentY, originX, originY;
            cin >> currentX >> currentY;
            if((x + r <= currentX && x + w - r >= currentX && y <= currentY && currentY <= y + h) || (y + r <= currentY && y + h - r >= currentY && x <= currentX && currentX <= x + w)) {
                cout << "inside" << endl;
            } else if(currentX > x && currentX < x + w && currentY > y && currentY < y + h) {
                if(currentX < x + w / 2) {
                    originX = x + r;
                } else {
                    originX = x + w - r;
                }
                if(currentY < y + h / 2) {
                    originY = y + r;
                } else {
                    originY = y + h - r;
                }
                double relativeX = abs(currentX - originX);
                double relativeY = abs(currentY - originY);
                if(relativeY > sqrt(pow(r, 2.0) - pow(relativeX, 2.0))) {
                    cout << "outside" << endl;
                } else {
                    cout << "inside" << endl;
                }
                
            } else {
                cout << "outside" << endl;
            }
        }
    }
    return 0;
}
