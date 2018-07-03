//
//  main.cpp
//  battleSimulation
//
//  Created by Ben Gorman on 6/19/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    char c;
    cin >> c;
    char nextC;
    if(cin.peek() != '\n') {
        cin.get(nextC);
    }
    char nextNextC;
    bool cPrintedLast = false;
    bool p1 = false;
    bool p2 = false;
    while(cin.peek() != '\n' && cin.get(nextNextC)) {
        p1 = false;
        p2 = false;
        if(c != nextC && c != nextNextC && nextC != nextNextC) {
            cout << "C";
            if(cin.peek() != '\n') {
                cin.get(c);
                p1 = true;
            }
            if(cin.peek() != '\n') {
                cin.get(nextC);
                p2 = true;
            }
            cPrintedLast = true;
            continue;
        } else if(c == 'R') {
            cout << 'S';
        } else if(c == 'B') {
            cout << 'K';
        } else if(c == 'L') {
            cout << 'H';
        }
        c = nextC;
        nextC = nextNextC;
        cPrintedLast = false;
    }
    if(!cPrintedLast) {
        if(c == 'R') {
            cout << 'S';
        } else if(c == 'B') {
            cout << 'K';
        } else if(c == 'L') {
            cout << 'H';
        }
        if(nextC == 'R') {
            cout << 'S';
        } else if(nextC == 'B') {
            cout << 'K';
        } else if(nextC == 'L') {
            cout << 'H';
        }
    } else {
        if(p1) {
            if(c == 'R') {
                cout << 'S';
            } else if(c == 'B') {
                cout << 'K';
            } else if(c == 'L') {
                cout << 'H';
            }
        } if(p2) {
            if(nextC == 'R') {
                cout << 'S';
            } else if(nextC == 'B') {
                cout << 'K';
            } else if(nextC == 'L') {
                cout << 'H';
            }
        }
    }
    return 0;
}
