#include <iostream>
#include <algorithm>
#include <vector>

bool comp2 (int a,int b) { return (a>b); }


int main() {
    int n, A;
    double B;
    std::cin >> n >> A >> B;
    std::vector<int> s;
    int S = 0;
    int c = 0;
    for (int i = 0; i < n; i += 1) {
        int a;
        std::cin >> a;
        if (i != 0) {
            s.push_back(a);
        }
        else {
            c = A * a;
        }
        S += a;
    }
    int k = 0;
    std::sort(s.begin(), s.end(), comp2);
    while (B > c / S) {
        k += 1;
        S -= s[0];
        s.erase(s.begin());
    }
    std::cout << k;
}
