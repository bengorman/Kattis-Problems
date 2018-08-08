//
//  main.cpp
//  vauvau
//
//  Created by Ben Gorman on 8/8/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>

using namespace std;

bool dogMad(int a, int b, int n) {
    return n % (a + b) == 0 ? 0 : n % (a + b) <= a;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = 0; i < 3; i++) {
        int time;
        cin >> time;
        switch (dogMad(a, b, time) + dogMad(c, d, time)) {
            case 0:
                cout << "none";
                break;
            case 1:
                cout << "one";
                break;
            case 2:
                cout << "both";
        }
        cout << endl;
    }
    return 0;
}
