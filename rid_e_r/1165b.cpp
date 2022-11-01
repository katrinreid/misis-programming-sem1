#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 1;
    std::cin >> n;
    std::vector<int> s;
    for (int h = 0; h < n; h += 1) {
        int a = 1;
        std::cin >> a;
        s.push_back(a);
    }
    std::sort(s.begin(), s.end());
    int answer = 0;
    int pos = 0;
    for (int k = 1; k <= n; k += 1) {
        for (int i = pos; i < n; i += 1) {
            if (s[i] >= k) {
                answer += 1;
                pos = i + 1;
                break;
            } else {
                pos = i + 1;
            }
        }
    }
    std::cout << answer;
}
