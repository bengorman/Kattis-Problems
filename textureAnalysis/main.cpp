//
//  main.cpp
//  textureAnalysis
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    string line;
    int t = 0;
    while(getline(cin, line) && line != "END") {
        t++;
        int counter = 0;
        for(int i = 1; i < line.length(); i++) {
            if(line[i] == '.') {
                counter++;
            } else {
                break;
            }
        }
        int currentCount = 0;
        bool even = 1;
        for(int i = 1; i < line.length(); i++) {
            if(line[i] == '.') {
                currentCount++;
            } else {
                if(currentCount != counter) {
                    even = 0;
                }
                currentCount = 0;
            }
        }
        cout << t << (even ? " " : " NOT ") << "EVEN" << endl;
    }
    return 0;
}
