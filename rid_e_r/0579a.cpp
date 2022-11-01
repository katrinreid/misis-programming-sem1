#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int k1 = 0;
    while (n > 0) {
        k1 += n & 1;
        n = n >> 1;
    }
    std::cout << k1;
}