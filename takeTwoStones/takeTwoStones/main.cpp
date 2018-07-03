//
//  main.cpp
//  takeTwoStones
//
//  Created by Ben Gorman on 5/30/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << "Bob";
    } else {
        cout << "Alice";
    }
    return 0;
}
