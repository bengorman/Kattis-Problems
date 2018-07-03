//
//  main.cpp
//  flowLayout
//
//  Created by Ben Gorman on 6/5/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    int w = 0;
    int h = 0;

    while(m != 0) {
        int wDisp = 0;
        int hDisp = 0;
        int hMax = 0;
        int wDispMax = 0;
        
        cin >> w;
        cin >> h;
        
        while(w != -1 && h != -1) {
            if(wDisp + w <= m) {
                //inline
                wDisp += w;
                if(h > hMax) {
                    hMax = h;
                }
            } else {
                //overflow
                if(wDisp > wDispMax) {
                    wDispMax = wDisp;
                }
                hDisp += hMax;
                hMax = h;
                wDisp = w;
            }
            
            cin >> w;
            cin >> h;
        }
        hDisp += hMax;
        if(wDisp > wDispMax) {
            wDispMax = wDisp;
        }
        //output
        cout << "\n";
        cout << wDispMax;
        cout << " x ";
        cout << hDisp;
        cout << "\n";
        
        cin >> m;
    }
    return 0;
}
