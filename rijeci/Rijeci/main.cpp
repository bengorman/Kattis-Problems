//
//  main.cpp
//  Rijeci
//
//  Created by Ben Gorman on 6/4/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int * recursiveButton(int ABCounter[]) {
    int temp = ABCounter[0];
    ABCounter[0] = ABCounter[1];
    ABCounter[1] += temp;
    return ABCounter;
}


int main() {
    int k;
    cin >> k;
    
    int ABCounter[2] = {1, 0};
    for(int i = 0; i < k; i++) {
        memcpy(ABCounter, recursiveButton(ABCounter), 2);
    }
    
    cout << ABCounter[0];
    cout << " ";
    cout << ABCounter[1];
    
    return 0;
}
