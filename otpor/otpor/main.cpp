//
//  main.cpp
//  otpor
//
//  Created by Ben Gorman on 6/25/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

string solve(string str) {
    char op;
    for(char c : str) {
        if(c == '-') {
            op = '-';
            break;
        } else if(c == '|') {
            op = '|';
            break;
        }
    }
    double sum = 0;
    double invSum = 0;
    int j = 0;
    cout << str << endl;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == op) {
            if(op == '-') {
                sum += stod(str.substr(j, i));
            } else {
                invSum += 1.0 / stod(str.substr(j, i));
            }
            
            j = i+1;
        }
    }
    if(op == '-') {
        sum += stod(str.substr(j, str.length()));
        return to_string(sum);
    } else {
        invSum += 1.0 / stod(str.substr(j, str.length()));
        return to_string(1.0 / invSum);
    }
}

int main() {
    int n;
    cin >> n;
    int resistorArr[n];
    for(int i = 0; i < n; i++) {
        cin >> resistorArr[i];
    }
    string circuit;
    char c;
    cin.get(c);
    circuit.push_back(c);
    int netParenthesis = 1;
    int i = 1;
    while(netParenthesis > 0) {
        cin.get(c);
        if(c == 'R') {
            cin.get(c);
            int index = c - '0';
            circuit.push_back(resistorArr[(int)c]);
            cout << resistorArr[(int)c] << 'resArr' << endl;
        } else {
            circuit.push_back(c);
        }
        if(c == '(') {
            netParenthesis++;
        } else if(c == ')') {
            netParenthesis--;
            int j = i;
            while(circuit[j] != '(') {
                j--;
            }
            cout << circuit << endl;
            string piece = circuit.substr(j+1, i-2);
            circuit.replace(j, i-j+1, solve(piece));
        }
        i++;
    }
    cout << circuit;
    
    return 0;
}
