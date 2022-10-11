#include <iostream>

int main() {
    int t;
    std::string s;
    std::cin>>t;
    while (t--) {
        int fl = 0;
        for (int i=1; i<=8; i+=1) {
            std::cin>>s;
            if (fl == 0) {
                for (int j=1; j<=6; j+=1) {
                    if (s[j-1] == '#' && s[j] == '.' && s[j + 1] == '#') {
                        fl = 1;
                        std::cout << i + 1 << " " << j + 1 << std::endl;
                        break;
                    }
                }
            }
        }
    }
}
