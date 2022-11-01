#include <iostream>

int main() {
    //std::ios::sync_with_stdio(0);
    //std::cin.tie(0);
    int t;
    std::cin >> t;
    for (int h = 0; h < t; h += 1) {
        int n;
        char m;
        std::cin >> n;
        std::cin >> m;
        std::string s;
        std::cin >> s;
        if (m == 'g') {
            std::cout << 0 << std::endl;
        } else {
            int answer = 0;
            s += s;
            int x0=0;
            int xl=0;
            for (int i=0; i<2*n; i+=1) {
                if (s[i] == 'g') {
                    x0 = i;
                    break;
                }
            }
            for (int i=0; i<2*n; i+=1) {
                if (s[i] == 'g') {
                    xl = i;
                }
            }
            int last=0;
            for (int i = xl; i > x0; i -= 1) {
                if (s[i] == 'g') {
                    last = i;
                }
                else if (s[i] == m) {
                    answer = std::max(answer, last-i);
                }
            }
            std::cout << answer << std::endl;
        }
    }
}
