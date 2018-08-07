//
//  main.cpp
//  treasureHunt
//
//  Created by Ben Gorman on 8/7/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    char** grid = new char*[r];
    for(int i = 0; i < r; i++) {
        grid[i] = new char[c];
        for(int j = 0; j < c; j++) {
            cin >> grid[i][j];
        }
    }
    int i = 0;
    int j = 0;
    int dist = 0;
    while(grid[i][j] != 'T') {
        dist++;
        if(grid[i][j] == 'N') {
            i--;
        } else if(grid[i][j] == 'S') {
            i++;
        } else if(grid[i][j] == 'W') {
            j--;
        } else if(grid[i][j] == 'E') {
            j++;
        }
        if(i >= r || i < 0 || j >= c || j < 0) {
            cout << "Out";
            return 0;
        }
        if(dist > 100000) {
            cout << "Lost";
            return 0;
        }
    }
    cout << dist;
    return 0;
}
