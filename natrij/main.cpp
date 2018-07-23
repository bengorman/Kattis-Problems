//
//  main.cpp
//  natrij
//
//  Created by Ben Gorman on 7/18/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    int sec1 = stoi(str1.substr(6, 8)) + 60 * stoi(str1.substr(3, 5)) + 3600 * stoi(str1.substr(0, 2));
    int sec2 = stoi(str2.substr(6, 8)) + 60 * stoi(str2.substr(3, 5)) + 3600 * stoi(str2.substr(0, 2));
    int ss = (sec2 - sec1 + 24*60*60 - 1) % (24*60*60) + 1;
    int hh = ss / 3600;
    ss -= hh * 3600;
    int mm = ss / 60;
    ss -= mm * 60;
    cout << setfill('0') << setw(2) << hh << ":" << setfill('0') << setw(2) << mm << ":" << setfill('0') << setw(2) << ss << endl;
    return 0;
}
