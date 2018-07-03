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
    int firstYear = contestants[0][0];
    for(int i = 0; i < contestants.size(); i++) {           //delete years before entryYear (these don't matter)
        if(contestants[i][0] < entryYear) {
            contestants.erase(contestants.begin() + i);
            i--;
        }
    }
    /*
    cout << "\n\n";
    for(int i = 0; i < contestants.size(); i++) {
        for(int j = 0; j < contestants[i].size(); j++) {
            cout << contestants[i][j];
            cout << " ";
        }
        cout << "\n";
    }
    */
    
    int i;
    int j;
    bool found = false;
    if(contestants.size() == 0 || contestants[0][0] > entryYear) {  //if the earliest year is after entryYear, win on entryYear
        cout << entryYear;
        //cout << "out1";
        return 0;
    }
    while(i < contestants.size()) {
        j = i + 1;
        k = i - 1;
        if(contestants[i][1] < power) {                     //check if current contestant's power level > power
            found = true;
            while(j < contestants.size() && contestants[j][0] == contestants[i][0]) { //check other contestants for the same year
                if(contestants[j][1] > power) {
                    found = false;
                }
                j++;
            }
            while(k >= 0 && contestants[k][0] == contestants[i][0]) {
                if(contestants[k][1] > power) {
                    found = false;
                }
                k--;
            }
        }
        if(found) {
            cout << contestants[i][0];
            //cout << "out2";
            return 0;
        }
        if(i < contestants.size() - 1 && (contestants[i+1][0] - contestants[i][0]) > 1) {
            cout << contestants[i][0] + 1;
            ///cout << "out3";
            return 0;
        }
        i = j;
    }
    if(firstYear + n - 1 > contestants[contestants.size() - 1][0]) {
        cout << contestants[contestants.size() - 1][0] + 1;
        return 0;
    }
    cout << "unknown";
    return 0;
}

