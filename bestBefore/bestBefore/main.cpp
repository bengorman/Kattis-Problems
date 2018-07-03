//
//  main.cpp
//  bestBefore
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    char ch;
    string str = "";
    while(cin.get(ch) && ch != '\n' && ch != ' ') {
        if(ch == '/') {
            if(a == 0) {
                a = stoi(str);
            } else if(b == 0) {
                b = stoi(str);
            }
            str = "";
            continue;
        }
        str += ch;
    }
    c = stoi(str);
    if(a > 28) {
        
    }
    
    
    
    return 0;
}
