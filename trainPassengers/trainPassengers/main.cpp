//
//  main.cpp
//  trainPassengers
//
//  Created by Ben Gorman on 6/25/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int capacity, numStations;
    cin >> capacity >> numStations;
    int onTrain = 0;
    int boarding;
    int leaving;
    int waiting;
    for(int i = 0; i < numStations; i++) {
        cin >> leaving;
        onTrain -= leaving;
        if(onTrain < 0) {
            cout << "impossible";
            return 0;
        }
        cin >> boarding;
        onTrain += boarding;
        if(onTrain > capacity) {
            cout << "impossible";
            return 0;
        }
        cin >> waiting;
        if(waiting > 0 && onTrain != capacity) {
            cout << "impossible";
            return 0;
        }
    }
    if(onTrain > 0) {
        cout << "impossible";
        return 0;
    }
    cout << "possible";
    return 0;
}
