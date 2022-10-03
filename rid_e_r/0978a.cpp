#include <iostream>
#include <vector>


int main() {
    std::vector<int> c(1001, 0);
    int nu = 0;
    int ni = 0;
    std::cin>>ni;
    std::vector<int> a(ni, 0);
    for (int i = 0; i < ni; i += 1) {
        std::cin>>a[i];
        nu += 0 == c[a[i]] ? 1 : 0;
        c[a[i]] += 1;
    }
    std::cout<<nu<<'\n';
    for (int i = 0; i < a.size(); i += 1) {
        if (1 == c[a[i]]) {
            std::cout<<a[i]<<' ';
        } else {
            c[a[i]] -= 1;
        }
    }
    return 0;
}