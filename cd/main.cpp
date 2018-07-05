/*
 * main.cpp
 *
 *  Created on: May 30, 2018
 *      Author: Ben Gorman
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	while(cin >> n >> m && (n != 0 || m != 0)) {
		int nArr[n] = {};
		for(int i = 0; i < n; i++) {
			cin >> nArr[i];
		}
		int sum = 0;
		for(int i = 0; i < m; i++) {
			int temp;
			cin >> temp;
			if(binary_search(nArr, nArr + n, temp)) {
				sum++;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
