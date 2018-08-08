//
//  main.cpp
//  bard
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, e;
    cin >> n >> e;
    vector<vector<int>> eveningVec(e);
    vector<int> bardVec(e, 0);
    int songCount = 0;
    for(int i = 0; i < e; i++) {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int villager;
            cin >> villager;
            if(villager == 1) {
                songCount++;
                bardVec[i] = songCount;
            } else {
                eveningVec[i].push_back(villager);
            }
        }
    }

    vector<vector<bool>> villagerVec(n, vector<bool>(songCount, false));
    for(int i = 0; i < e; i++) {
        vector<int> evening = eveningVec[i];
        if(bardVec[i] > 0) {
            for(int j = 0; j < evening.size(); j++) {
                villagerVec[evening[j] - 1][bardVec[i] - 1] = 1;
            }
        } else {
            vector<bool> sharedSongs(songCount, false);
            for(int j = 0; j < songCount; j++) {
                for(int k = 0; k < evening.size(); k++) {
                    if(villagerVec[evening[k] - 1][j]) {
                        sharedSongs[j] = true;
                        break;
                    }
                }
            }
            for(int j = 0; j < evening.size(); j++) {
                villagerVec[evening[j] - 1] = sharedSongs;
            }
        }
    }
    
    cout << 1 << endl;
    for(int i = 1; i < n; i++) {
        bool allSongs = true;
        for(int j = 0; j < songCount; j++) {
            if(!villagerVec[i][j]) {
                allSongs = false;
                break;
            }
        }
        if(allSongs) {
            cout << i + 1 << endl;
        }
    }
    
    return 0;
}
