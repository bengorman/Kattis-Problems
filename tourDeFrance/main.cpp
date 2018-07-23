//
//  main.cpp
//  tourDeFrance
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    while(1) {
        int f, r, temp;
        cin >> f;
        if(f == 0) {
            break;
        }
        cin >> r;
        vector<int> frontTeeth;
        vector<int> rearTeeth;
        vector<double> ratioVec;
        for(int i = 0; i < f; i++) {
            cin >> temp;
            frontTeeth.push_back(temp);
        }
        for(int i = 0; i < r; i++) {
            cin >> temp;
            rearTeeth.push_back(temp);
        }
        for(int f : frontTeeth) {
            for(int r : rearTeeth) {
                ratioVec.push_back(r/(double)f);
            }
        }
        sort(ratioVec.begin(), ratioVec.end());
        double spreadMax = 0;
        for(int i = 1; i < ratioVec.size(); i++) {
            double spread = ratioVec[i] / ratioVec[i-1];
            if(spread > spreadMax) {
                spreadMax = spread;
            }
        }
        cout << setprecision(2) << fixed << spreadMax << endl;
    }
    return 0;
}
