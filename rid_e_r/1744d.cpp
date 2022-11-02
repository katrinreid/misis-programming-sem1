#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>


// >> 1 - деление на 2
// & 0/1 - проверка 0 или 1

int main() {
    int t;
    std::cin >> t;
    for (int h = 0; h < t; h += 1) {
        int n;
        std::cin >> n;

        int count = 0;
        int answer = 0;
        for (int i = 0; i < n; i += 1) {
            int a;
            std::cin >> a;
            while (a % 2 == 0) {
                count += 1;
                a = a / 2;
            }
        }
        if (count >= n) {
            std::cout << answer << std::endl;
        } else {
            std::vector<int> s;
            for (int i = n; i > 1; i -= 1) {
                int b = i;
                int k = 0;
                while (b % 2 == 0) {
                    b /= 2;
                    k += 1;
                }
                if (k != 0) {
                    s.push_back(k);
                }
            }
            std::sort(s.begin(), s.end());
            for (int i = s.size() - 1; i >= 0; i -= 1) {
                count += s[i];
                answer += 1;
                if (count >= n) {
                    std::cout << answer << std::endl;
                    break;
                }
            }
            if (count < n) {
                std::cout << -1 << std::endl;
            }
        }
    }
}
