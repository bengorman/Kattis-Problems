//
//  main.cpp
//  coastLength
//
//  Created by Ben Gorman on 6/20/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

bool isOcean(int x, int y, int** map) {     //finds out if water is sea or lake
    if(x == 0 || x == sizeof(map)/sizeof(map[0]) || y == 0 || y == sizeof(map[0])/sizeof(int)) {
        return 1;
    }
    map[x][y] = 1;
    if(!map[x-1][y]) {
        if(isOcean(x-1, y, map)) {
            return 1;
        }
    } if(!map[x][y+1]) {
        if(isOcean(x, y+1, map)) {
            return 1;
        }
    } if(!map[x+1][y]) {
        if(isOcean(x+1, y, map)) {
            return 1;
        }
    } if(!map[x][y-1]) {
        if(isOcean(x, y-1, map)) {
            return true;
        }
    }
    
    return 0;
}

int main() {
    int n;
    cin >> n;
    int m;
    cin >> m;
    
    int** map = new int*[n+2];
    for(int i = 0; i < n+2; i++) {
        map[i] = new int[m+2];
        for(int j = 0; j < m+2; j++) {
            map[i][j] = 0;
        }
    }
    
    int coast = 0;
    string line;
    for(int i = 1; i < n+1; i++) {
        getline(cin, line);
        for(int j = 1; j < m+1; j++) {
            map[i][j] = (int)(line[j-1] - 0);
        }
    }
    for(int i = 0; i < n+2; i++) {
        for(int j = 0; j < m+2; j++) {
            cout << map[i][j] << ' ';
        }
        cout << endl;
    }
    
    
    
    
    
    
    
    return 0;
}
