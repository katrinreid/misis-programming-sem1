#include <iostream>

int main() {
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i += 1) {
        int n = 1, m = 1;
        std::cin >> n >> m;
        int x = 100; // номер строки
        int y = 100; // номер столбца
        std::string a;
        std::string s="";
        for (int j = 0; j < n; j += 1) {
            std::cin >> a;
            s += a;
            for (int k = 0; k < m; k += 1) {
                if (a[k] == 'R') {
                    if (j < x) {
                        x = j;
                    }
                    if (k < y) {
                        y = k;
                    }
                }
            }
        }
        if (s[x*m+y] == 'R') {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
