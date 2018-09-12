#include <iostream>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    int* commercialArr = new int[n];
    int maxSoFar = 0;
    int maxEndingHere = 0;
    for(int i = 0; i < n; i++) {
        cin >> commercialArr[i];
        commercialArr[i] -= p;
        maxEndingHere = maxEndingHere + commercialArr[i];
        if(maxEndingHere < 0) {
            maxEndingHere = 0;
        } else if(maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere;
        }
    }
    cout << maxSoFar;
    return 0;
}
