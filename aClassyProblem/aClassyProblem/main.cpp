//
//  main.cpp
//  aClassyProblem
//
//  Created by Ben Gorman on 6/26/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Person {
    string name, classRank;
    Person(string n, string c) : name(n), classRank(c) {}
};

bool comp(Person p1, Person p2) {
    for(int i = 0; i < min(p1.classRank.length(), p2.classRank.length()); i++) {
        if(p1.classRank[i] > p2.classRank[i]) {
            return 1;
        }
        if(p1.classRank[i] < p2.classRank[i]) {
            return 0;
        }
    }
    if(p1.classRank.length() > p2.classRank.length()) {
        for(int i = p2.classRank.length(); i < p1.classRank.length(); i++) {
            if(p1.classRank[i] == 'l') {
                return 0;
            }
            if(p1.classRank[i] == 'u') {
                return 1;
            }
        }
    }
    else if(p1.classRank.length() < p2.classRank.length()) {
        for(int i = p1.classRank.length(); i < p2.classRank.length(); i++) {
            if(p2.classRank[i] == 'l') {
                return 1;
            }
            if(p2.classRank[i] == 'u') {
                return 0;
            }
        }
    }
    return p1.name < p2.name;
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<Person> personVec;
        for(int j = 0; j < n; j++) {
            string name;
            cin >> name;
            name = name.substr(0, name.length() - 1);   //remove semicolon
            string classRank;
            cin >> classRank;
            string tempStr = classRank;
            classRank = "";
            for(int k = 0; k < tempStr.length(); k++) {     //creates reversed string of only u, l, and m
                if(tempStr[k] == 'u' || (tempStr[k] == 'l' && tempStr[k+1] == 'o') || tempStr[k] == 'm') {
                    classRank.insert(classRank.begin(), tempStr[k]);
                }
            }
            cin >> tempStr;     //skip the word "class"
            Person myPerson(name, classRank);
            personVec.push_back(myPerson);
        }
        sort(personVec.begin(), personVec.end(), comp);
        cout << endl;
        for(Person p : personVec) {
            cout << p.name << endl;
        }
        cout << "==============================";
    }
    return 0;
}
