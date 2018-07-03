//
//  main.cpp
//  Autori
//
//  Created by Ben Gorman on 6/5/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    for(char c : str) {
        if(isupper(c)) {
            cout << c;
        }
    }
    return 0;
}
