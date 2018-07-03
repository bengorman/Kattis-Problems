//
//  main.cpp
//  Modulo
//
//  Created by Ben Gorman on 5/30/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int arr[10];
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        arr[i] = arr[i] % 42;
    }
    
    int numUnique = 0;
    for(int i = 0; i < 10; i++) {
        int j;
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                break;
            }
        }
        if(i == j) {
            numUnique++;
        }
    }
    
    cout << numUnique;
    
    
    
    
    
    
    
    return 0;
}
