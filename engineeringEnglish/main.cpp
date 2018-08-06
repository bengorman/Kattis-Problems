//
//  main.cpp
//  engineeringEnglish
//
//  Created by Ben Gorman on 8/6/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <unordered_set>
#include <cctype>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
    unordered_set<string> seenWords;
    string line;
    while(getline(cin, line) && line != "" && line != "\n") {
        string word;
        istringstream iss(line);
        while(iss >> word) {
            string wordToLower = word;
            transform(wordToLower.begin(), wordToLower.end(), wordToLower.begin(), ::tolower);
            if(seenWords.find(wordToLower) == seenWords.end()) {
                cout << word;
            } else {
                cout << '.';
            }
            cout << ' ';
            seenWords.insert(wordToLower);
        }
        cout << endl;
    }
    
    return 0;
}
