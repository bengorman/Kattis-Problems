//
//  main.cpp
//  esej
//
//  Created by Ben Gorman on 6/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(NULL));
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    int a;
    cin >> a;
    int b;
    cin >> b;
    
    for(int i = 0; i < b; i++) {
        int wordLength = rand() % 3 + 5;
        for(int i = 0; i < wordLength; i++) {
            int randInt = rand() % 26;
            cout << alphabet[randInt];
        }
        cout << " ";
    }
    return 0;
}
