#include <iostream>
#include <cmath>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;
    int dist = n2 - n1;
    if(abs(dist) > 180) {
        if(dist > 0) {
            std::cout << dist - 360;
        } else {
            std::cout << 360 + dist;
        }
    } else {
        if(dist == -180) {
            std::cout << 180;
        } else {
            std::cout << dist;
        }
    }
    return 0;
}
