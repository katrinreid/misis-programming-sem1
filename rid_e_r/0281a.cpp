#include <iostream>
#include <string>


int main() {
    std::string s;
    std::cin>>s;
    if (tolower(s[0]) == s[0]) {
        s[0] = toupper(s[0]);
    }
    std::cout<<s;
}