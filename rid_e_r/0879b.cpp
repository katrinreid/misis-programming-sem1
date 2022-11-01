#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int n = 0;
    long long k = 0;
    std::cin >> n >> k;
    int now = 0;
    int p = 0;
    std::vector<int> s;
    int maxi = 0;
    for (int h = 0; h < n; h += 1) {
        int a = 0;
        std::cin >> a;
        if (a > maxi) {
            maxi = a;
        }
        s.push_back(a);
    }
    now = s[0];
    long long count = 1;
    while (p < k) {
        int a = 0;
        a = s[count];
        count += 1;
        if (now > a) {
            p += 1;
            s.push_back(a);
        } else if (now < a) {
            s.push_back(now);
            now = a;
            p = 1;
        }
        if (now == maxi) {
            break;
        }
    }
    std::cout << now;
}
