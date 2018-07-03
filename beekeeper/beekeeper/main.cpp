//
//  main.cpp
//  beekeeper
//
//  Created by Ben Gorman on 7/2/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        string bestWord = "";
        int maxSum = -1;
        for(int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            int sum = 0;
            for(int j = 1; j < temp.length(); j++) {
                if(temp[j] == 'a' || temp[j] == 'e' || temp[j] == 'i' || temp[j] == 'o' || temp[j] == 'u' || temp[j] == 'y') {
                    if(temp[j] == temp[j-1]) {
                        sum++;
                    }
                }
            }
            if(sum > maxSum) {
                bestWord = temp;
                maxSum = sum;
            }
        }
        cout << bestWord << endl;
    }
    return 0;
}
