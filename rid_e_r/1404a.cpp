#include <iostream>
#include <string>
#include <vector>


int main() {
    int t, n, k;
    int x, y;
    int a;
    std::string s="";
    std::string w;
    std::cin >> t;
    std::vector<bool> ans(t, 1);
    for (int i=0; i<t; i+=1) {
        std::cin>>n>>k;
        w.clear();
        w.resize(k, '_');
        std::cin>>s;
        x = 0;
        y = 0;
        for (int j=0; j<n; j+=1) {
            a = j % k;
            if (s[j] == '0') {
                if (w[a] == '_') {
                    w[a] = s[j];
                    x += 1;
                }
                else if (s[j] != w[a]) {
                    ans[i] = 0;
                    break;
                }
            }
            if (s[j] == '1') {
                if (w[a] == '_') {
                    w[a] = s[j];
                    y += 1;
                }
                else if (s[j] != w[a]) {
                    ans[i] = 0;
                    break;
                }
            }
        }
        if (x>k/2 || y>k/2) {
            ans[i] = 0;
        }
    }
    for (int i=0; i<t; i+=1) {
        if (ans[i] == 0) {
            std::cout<<"NO"<<"\n";
        }
        else {
            std::cout<<"YES"<<"\n";
        }
    }
}