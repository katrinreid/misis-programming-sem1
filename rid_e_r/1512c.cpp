#include <iostream>
#include <string>
#include <vector>


int main() {
    int t, a, b, n;
    int x, y = 0;
    std::string s;
    std::cin>>t;
    std::vector<std::string> ans(t,"0");
    for (int i=0; i<t; i+=1) {
        std::cin>>a>>b;
        std::cin>>s;
        n = a + b;
        x=0;
        y=0;
        if ((n % 2) == 0 && (a % 2) == 1)
            ans[i] = "-1";
        if ((n % 2) == 1 && (a % 2) == 1 && s[n / 2] == '1')
            ans[i] = "-1";
        else if ((n % 2) == 1 && (a % 2) == 1)
            s[n / 2] = '0';
        if ((n % 2) == 1 && (b % 2) == 1 && s[n / 2] == '0')
            ans[i] = "-1";
        else if ((n % 2) == 1 && (b % 2) == 1)
            s[n / 2] = '1';
        if (ans[i] == "0") {
            for (int j=0; j<n; j+=1) {
                if (s[j] == '1') {
                    if (s[n-j-1] == '0') {
                        ans[i] = "-1";
                        break;
                    }
                    s[n-j-1] = '1';
                }
                else if (s[j] == '0') {
                    if (s[n-j-1] == '1') {
                        ans[i] = "-1";
                        break;
                    }
                    s[n-j-1] = '0';
                }
            }
        }
        if (ans[i] == "0") {
            for (int j=0; j<n; j+=1) {
                if (s[j] == '1')
                    y += 1;
                if (s[j] == '0')
                    x += 1;
            }
            if (x > a || y > b)
                ans[i] = "-1";
        }
        if (ans[i] == "0") {
            for (int j=0; j < n / 2; j+=1) {
                if (s[j] == '?') {
                    if (x < a) {
                        s[j] = '0';
                        s[n-j-1] = '0';
                        x += 2;
                    }
                    else {
                        s[j] = '1';
                        s[n-j-1] = '1';
                    }
                }
            }
            ans[i] = s;
        }
    }
    for (std::string answer : ans) {
        std::cout<<answer<<"\n";
    }

}