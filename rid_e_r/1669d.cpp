#include <iostream>
#include <array>

int main() {
    int t = 1;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 1;
        std::cin >> n;
        std::string a;
        std::cin >> a;
        int b = 0;
        int r = 0;
        int fl = 0;
        for (int j = 0; j < n; j += 1) {
            if (a[j] == 'B') {
                b += 1;
            } else if (a[j] == 'R') {
                r += 1;
            } else {
                if (b != 0 and r == 0) {
                    fl = 1;
                    break;
                } else if (b == 0 and r != 0) {
                    fl = 1;
                    break;
                } else {
                    b = 0;
                    r = 0;
                }
            }
        }
        if (b != 0 and r == 0) {
            fl = 1;
        } else if (b == 0 and r != 0) {
            fl = 1;
        }
        if (fl == 1) {
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    }
}
