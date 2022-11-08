#include <iostream>

int main() {
    int n, a, b, c, d, s[1000], m = 1;
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        std::cin >> a >> b >> c >> d;
        s[i] = a + b + c + d;
        if (s[1] < s[i]) {
            m += 1;
        }
    }
    std::cout << m;
}