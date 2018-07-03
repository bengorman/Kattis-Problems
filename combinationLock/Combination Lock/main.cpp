//
//  main.cpp
//  Combination Lock
//
//  Created by Ben Gorman on 5/30/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int caseArr[4];
    bool end = false;
    while(!end) {
        end = true;
        for(int i = 0; i < 4; i++) {
            cin >> caseArr[i];
            if(caseArr[i] != 0) {
                end = false;
            }
        }
        if(end) {
            break;
        }
    
    
        int degrees = 720;

        degrees += ((caseArr[0] - caseArr[1] + 40) % 40) * 9;
        
        degrees += 360;
        
        degrees += ((caseArr[2] - caseArr[1] + 40) % 40) * 9;
        
        degrees += ((caseArr[2] - caseArr[3] + 40) % 40) * 9;
        
        cout << degrees;
        cout << "\n";
    }
    
    return 0;
}
