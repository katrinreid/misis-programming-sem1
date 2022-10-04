#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int t=1;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        int ans=0;
        int n=2;
        std::string s;
        int k=1;
        std::cin>>n;
        std::cin>>s;
        std::cin>>k;
        std::string ob; // особые буквы
        for (int j=0; j<k; j+=1) {
            std::string b;
            std::cin>>b;
            ob += b;
        }
        int flag = 0;
        int d = 0;
        int f=-1;
        for (int j=0; j<n; j+=1) {
            for (int z=0; z<k; z+=1) {
                if (s[j] == ob[z]) {
                    flag = 1;
                    if (f==-1) {
                        f = j;
                    }
                }
            }
            if (flag == 0) {
                d += 1;
            }
            else {
                if (ans < d && f == j) {
                    ans = d;
                }
                else if (ans < (d+1) && f != j) {
                    ans = d+1;
                }
                d = 0;
                flag = 0;
            }
        }
        std::cout<<ans<<std::endl;
    }
}
