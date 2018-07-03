//
//  main.cpp
//  symmetricOrder
//
//  Created by Ben Gorman on 6/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int counter = 0;
    string tempStr;
    while(cin >> n && n != 0) {
        counter++;
        cout << "SET " << counter << endl;
        
        vector<string> evenNames;
        for(int i = 0; i < n; i++) {
            cin >> tempStr;
            if(i % 2 == 0) {
                cout << tempStr << endl;
            } else {
                evenNames.insert(evenNames.begin(), tempStr);
            }
        }
        for(string name : evenNames) {
            cout << name << endl;
        }
    }
    return 0;
}
