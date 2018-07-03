//
//  main.cpp
//  eightQueens
//
//  Created by Ben Gorman on 6/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    bool board[8][8] = {{false}};
    bool foundInCol[8] = {false};
    int queenCounter = 0;
    for(int i = 0; i < 8; i++) {
        bool foundInRow = false;
        for(int j = 0; j < 8; j++) {
            char tempChar;
            cin >> tempChar;
            if(tempChar == '*') {
                int row = i - 1;
                int colLeft = j - 1;
                while(row >= 0 && colLeft >= 0) {
                    if(board[row][colLeft]) {
                        cout << "invalid";
                        return 0;
                    }
                    row--;
                    colLeft--;
                }
                row = i - 1;
                int colRight = j + 1;
                while(row >= 0 && colRight < 8) {
                    if(board[row][colRight]) {
                        cout << "invalid";
                        return 0;
                    }
                    row--;
                    colRight++;
                }
                
                if(!foundInRow && !foundInCol[j]) {
                    board[i][j] = true;
                    foundInRow = true;
                    foundInCol[j] = true;
                    queenCounter++;
                } else {
                    cout << "invalid";
                    return 0;
                }
            }
        }
    }
    if(queenCounter == 8) {
        cout << "valid";
    }
    else {
        cout << "invalid";
    }
    return 0;
}
