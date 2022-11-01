#include <iostream>
#include <array>
#include <vector>


int main() {
    int t;
    std::cin >> t;
    for (int h = 0; h < t; h += 1) {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        std::vector<int> w(n + 1);
        for (int i = 1; i <= n; i += 1) {
            w[i] += w[i - 1];
            if (s[i - 1] == 'W') {
                w[i] += 1;
            }
        }
        int result = INT_MAX;
        for (int i = k; i <= n; i += 1) {
            result = std::min(result, w[i] - w[i - k]);
        }
        std::cout << result << std::endl;
    }
}