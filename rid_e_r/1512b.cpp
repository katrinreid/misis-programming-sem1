#include <iostream>
#include <cmath>
#include <array>

int main() {
    int t = 1;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 2;
        std::cin >> n;
        int f[n];
        std::array<std::string, 10001> s{""};
        int x1 = 100000; // строка или список в списке
        int y1 = 100000; // столбец или элемент в строке
        int x2 = 100000;
        int y2 = 100000;
        int fl = 0;
        for (int j = 0; j < n; j += 1) {
            std::string a;
            std::cin >> a;
            s[j] = a;
            for (int k = 0; k < n; k += 1) {
                if (s[j][k] == '*' and x1 == 100000) {
                    x1 = j;
                    y1 = k;
                } else if (s[j][k] == '*' and x1 != 100000 and x2 == 100000) {
                    x2 = j;
                    y2 = k;
                }
            }
        }
        if (x1 != x2 and y1 != y2) {
            s[x1][y2] = '*';
            s[x2][y1] = '*';
        } else if (x1 == x2) {
            if (x1 > 0) {
                s[x1 - 1][y1] = '*';
                s[x1 - 1][y2] = '*';
            } else {
                s[x1 + 1][y1] = '*';
                s[x1 + 1][y2] = '*';
            }
        } else if (y1 == y2) {
            if (y1 > 0) {
                s[x1][y1 - 1] = '*';
                s[x2][y2 - 1] = '*';
            } else {
                s[x1][y1 + 1] = '*';
                s[x2][y2 + 1] = '*';
            }
        }
        for (int j = 0; j < n; j += 1) {
            std::cout << s[j] << std::endl;
        }
    }
}
