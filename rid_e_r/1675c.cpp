#include <iostream>
#include <string>

int main() {
    int t=1;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        std::string s;
        std::cin>>s;
        int k=-1;
        for (int j=0; j<s.length(); j+=1) {
            if (s[j] == '0') {
                k = j;
                break;
            }
        }
        int answer=0;
        if (k == -1) {
            for (int j=(s.length()-1); j>=0; j-=1) {
                if (s[j] == '1') {
                    answer += 1;
                    break;
                }
                else {
                    if (s[j] == '?') {
                        answer += 1;
                    }
                    else if (s[j] == '1') {
                        answer += 1;
                        break;
                    }
                }
            }
        }
        else {
            answer += 1;
            for (int j=k; j>=0; j-=1) {
                if (s[j] == '1') {
                    answer += 1;
                    break;
                }
                else {
                    if (s[j] == '?') {
                        answer += 1;
                    }
                    else if (s[j] == '1') {
                        answer += 1;
                        break;
                    }
                }
            }
        }
        std::cout<<answer<<std::endl;
    }
}
