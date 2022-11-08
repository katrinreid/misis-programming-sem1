#include <iostream>

int main() {
    int n = 1;
    std::cin >> n;
    int s[200000 + 100];
    int v[200000 + 100];
    int answer = 0;
    for (int h = 0; h < n; h += 1) {
        int a = 0;
        std::cin >> a;
        s[h] = a;
    }
    answer = s[0];
    for (int i = n - 1; i >= 0; i -= 1) {
        if (v[s[i]] == 0) {
            answer = s[i];
            v[s[i]] = 1;
        }
    }
    std::cout << answer;
}
