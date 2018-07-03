//
//  main2.cpp
//  kingsOfTheForest
//
//  Created by Ben Gorman on 5/30/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<vector>

using namespace std;


vector<vector<int>> sortByYear(vector<vector<int>> contestants, int row) {
    int n = row;
    int i, j;
    vector<int> key;
    for(i = 1; i < n; i++) {
        key = contestants[i];
        j = i - 1;
        while(j >= 0 && contestants[j][0] > key[0]) {
            contestants[j+1] = contestants[j];
            j--;
        }
        contestants[j+1] = key;
    }
    return contestants;
}

int main() {
    int k;
    cin >> k;
    int n;
    cin >> n;
    
    int entryYear;
    cin >> entryYear;
    int power;
    cin >> power;
    
    int row = n+k-2;
    int col = 2;
    vector<vector<int>> contestants(row);
    for(int i = 0; i < row; i++) {              //initializing vector
        contestants[i] = vector<int>(col);
        for(int j = 0; j < col; j++) {
            cin >> contestants[i][j];
        }
    }
    
    contestants = sortByYear(contestants, row);             //sort list by year
    
    int currentYear;
    int i = 0;
    int a = -1;
    int b = -1;
    while(i < contestants.size()) {
        currentYear = contestants[i][0];
        cout << currentYear;
        if(entryYear <= currentYear) {
            b = -2;
        }
        for(int j = 0; j < contestants.size(); j++) {   //find current participants for currentYear
            if(contestants[j][0] <= currentYear) {
                if(a == -1) {
                    a = j;
                } else {
                    b = j;
                }
            }
        }
        if(b == -1) {
            cout << "ERROR";
        } else if(a == -1) {        //no competitors this year
            cout << currentYear;
            return 0;
        } else if(b != -2) {        //two other competitors
            if(contestants[a][1] > contestants[b][1]) {
                contestants.erase(contestants.begin() + a);
            } else {
                contestants.erase(contestants.begin() + b);
            }
        } else {                    //one competitor
            if(contestants[a][1] > power) {
                contestants.erase(contestants.begin() + a);
            } else {
                cout << currentYear;
                return 0;
            }
        }
        
        i++;
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
