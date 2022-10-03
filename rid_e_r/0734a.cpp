#include <iostream>
#include <string>


int main() {
    int n;
    int a = 0, d = 0;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    for (int i=0; i < n; i++) {
        if (s[i] == 'A') {
            a += 1;
        }
        if (s[i] == 'D') {
            d += 1;
        }
    }
    if (a==d) {
        std::cout<<"Friendship";
    }
    if (a > d) {
        std::cout<<"Anton";
    }
    if (a < d) {
        std::cout<<"Danik";
    }
}
