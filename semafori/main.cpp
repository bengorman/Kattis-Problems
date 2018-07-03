//
//  main.cpp
//  semafori
//
//  Created by Ben Gorman on 6/4/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <array>

using namespace std;

int main() {
    int numLights;
    cin >> numLights;
    int roadLength;
    cin >> roadLength;
    
    int timeElapsed = 0;
    
    int distArr[numLights];
    int redArr[numLights];
    int greenArr[numLights];
    for(int i = 0; i < numLights; i++) {
        cin >> distArr[i];
        cin >> redArr[i];
        cin >> greenArr[i];
        //cout << "timeElapsed: ";
        //cout << timeElapsed;
        //cout << " ";
        if(i > 0) {
            timeElapsed += distArr[i] - distArr[i-1];
        } else {
            timeElapsed += distArr[i];
        }
        //cout << timeElapsed;
        //cout << " ";
        if((timeElapsed % (redArr[i] + greenArr[i])) - redArr[i] < 0) {     //red light, wait for green
            timeElapsed += ((timeElapsed % (redArr[i] + greenArr[i])) - redArr[i]) * -1;
            //cout << "red light!: ";
            //cout << timeElapsed;
        }
        //cout << "\n";
    }
    
    timeElapsed += (roadLength - (distArr[numLights - 1]));
    cout << timeElapsed;
    
    return 0;
}
