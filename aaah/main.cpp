//
//  main.cpp
//  Aaah!
//
//  Created by Ben Gorman on 5/30/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    string myAh;
    cin >> myAh;
    string targetAh;
    cin >> targetAh;
    
    if(myAh.length() >= targetAh.length()) {
        cout << "go";
    } else {
        cout << "no";
    }
    
    return 0;
}
