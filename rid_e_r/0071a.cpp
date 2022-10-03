#include <iostream>
#include <string>


int main() {
    int n;
    int a, d = 0;
    std::cin>>n;
    for (int i=0; i < n; i++) {
        std::string s;
        std::cin>>s;
        a = s.length();
        if (a > 10) {
            std::cout<<s[0]<<a-2<<s[a-1]<<std::endl;
        }
        else {
            std::cout<<s<<std::endl;
        }
    }
}