//
//  main.cpp
//  Arithmetic
//
//  Created by Ben Gorman on 6/27/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>
#include <bitset>
#include <sstream>

using namespace std;

string octToBin(int n) {
    string returnStr;
    for(int i = 2; i >=0; i--) {
        int k = n >> i;
        if(k & 1) {
            returnStr.push_back('1');
        } else {
            returnStr.push_back('0');
        }
    }
    return returnStr;
}

string binToHex(string str) {
    bitset<8> set(str);
    stringstream res;
    res << hex << uppercase << set.to_ulong();
    return res.str();
}

int main() {
    string nStr;
    cin >> nStr;
    string binaryStr = "";
    string ans = "";
    if(nStr.length() * 3 % 4 != 0) {
        for(int i = 0; i < 4 - ((nStr.length() * 3) % 4); i++) {
            binaryStr.push_back('0');
        }
    }
    for(int i = 0; i < nStr.length(); i++) {
        binaryStr += octToBin(nStr[i]);
        if(binaryStr.length() >= 4) {
            ans += binToHex(binaryStr.substr(0, 4));
            binaryStr.erase(0, 4);
        }
    }
    if(binaryStr.length() > 0) {
        ans += binToHex(binaryStr);
    }
    ans.erase(0, min(ans.find_first_not_of('0'), ans.size()-1));
    cout << ans;
    return 0;
}
