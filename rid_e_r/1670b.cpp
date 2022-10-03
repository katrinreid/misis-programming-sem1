#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <cstring>


int t, n, k, p, answer, f[300];
char s[200001], c;
int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>t;
    while (t--) {
        answer = 0;
        std::cin >> n >> (s+1) >> k;
        memset(f, 0, sizeof f);
        for (int i=1; i<=k ; i++) {
            std::cin >> c;
            f[(int)c] = 1;
        }
        p = 1;
        for (int i=1; i<=n; i++) {
            if (f[(int)s[i]]) {
                answer = std::max(answer, i-p);
                p = i;
            }
        }
        std::cout << answer << "\n";
    }
}