//
//  main.cpp
//  rot
//
//  Created by Ben Gorman on 7/23/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

char** rotateCW(char **inArr, int r, int c) {
    int temp = r;
    r = c;
    c = temp;
    
    char **outArr = new char*[r];
    for(int i = 0; i < r; i++) {
        outArr[i] = new char[c];
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            outArr[i][j] = inArr[c - j - 1][i];
        }
    }
    return outArr;
}

int main() {
    int r, c, angle;
    cin >> r >> c;
    char** table = new char*[r];
    for(int i = 0; i < r; i++) {
        table[i] = new char[c];
        for(int j = 0; j < c; j++) {
            cin >> table[i][j];
        }
    }
    cin >> angle;
    
    char** outputArr;
    int outR = r;
    int outC = c;
    if(angle % 90 == 0) {
        outputArr = table;
    } else {
        int size = r + c - 1;
        outR = size;
        outC = size;
        outputArr = new char*[size];
        for(int i = 0; i < size; i++) {
            outputArr[i] = new char[size];
            for(int j = 0; j < size; j++) {
                outputArr[i][j] = ' ';
            }
        }
        int m = r - 1;
        for(int n = 0; n < size; n++) {
            int j = 0;
            int i = n;
            int dif = 0;
            for(; i >= 0 && j < c && m < size; j++, i--, m+=2) {
                if(i >= r) {
                    m-=2;
                    continue;
                }
                outputArr[n][m] = table[i][j];
                dif++;
            }
            i++;
            m -= 2;
            j--;
            m = (n >= r - 1 ? m + 1 : m - 1) - 2 * (dif - 1);
        }
    }
    for(int i = 0; i < angle / 90; i++) {
        outputArr = rotateCW(outputArr, outR, outC);
        int temp = outR;
        outR = outC;
        outC = temp;
    }
    for(int i = 0; i < outR; i++) {
        for(int j = 0; j < outC; j++) {
            cout << outputArr[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
