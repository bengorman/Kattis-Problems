/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

struct Team {
	string name;
	int rank;
	Team(string n, int r): name(n), rank(r) {}
};

bool comp(Team t1, Team t2) {
	return (t1.rank < t2.rank);
}

int main() {
	int t;
	cin >> t;
	while (t > 0) {
		int n;
		cin >> n;
		vector<Team> teamVec;
		for(int i = 1; i <= n; i++) {
			string name;
			cin >> name;
			int preferred;
			cin >> preferred;
			Team thisTeam(name, preferred);
			teamVec.push_back(thisTeam);
		}
		sort(teamVec.begin(), teamVec.end(), comp);
		long long int sum = 0;
		for(int i = 0; i < n; i++) {
			sum += abs(i + 1 - teamVec[i].rank);
		}
		cout << sum << endl;

		t--;
	}
	return 0;
}
