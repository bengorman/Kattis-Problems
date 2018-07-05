/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string numStr;
    cin >> numStr;
    while(numStr != "END") {
        double n;
        stringstream myStream(numStr);
        myStream >> n;

        bool member = true;
        for(int i = 0; i < 20; i++) {
            n *= 3;
            if(1 <= n && n < 2) {
                cout << "NON-MEMBER" << endl;
                member = false;
                break;
            } else if(n >= 2) {
                n -= 2;
            }
        }
        if(member) {
            cout << "MEMBER" << endl;
        }

        cin >> numStr;
    }

    return 0;
}
