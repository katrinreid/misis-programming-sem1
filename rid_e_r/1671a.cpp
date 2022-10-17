#include <iostream>

int main() {
    int t;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        std::string s;
        std::cin>>s;
        int a=0;
        int b=0;
        if (s[0] == 'a') {
            a += 1;
        }
        else {
            b += 1;
        }
        int fl=1;
        for (int j=0; j<s.length(); j+=1) {
            if (j==0 and j == s.length()-1) {
                fl = 0;
            }
            else if (j == 0 and s[j] != s[j+1]) {
                fl = 0;
            }
            else if (j == s.length()-1 and s[j] != s[j-1]) {
                fl = 0;
            }
            else if (s[j] != s[j-1] and s[j] != s[j+1]) {
                fl = 0;
            }
        }

        if (fl==1) {
            std::cout<<"yes"<<std::endl;
        }
        else {
            std::cout<<"no"<<std::endl;
        }
    }
}
