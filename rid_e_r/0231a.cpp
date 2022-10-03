#include <iostream>


int main() {
    int t=1;
    int ans=0;
    std::cin>>t;
    for (int i = 0; i < t; i += 1) {
        int a=0;
        int b=0;
        int c=0;
        std::cin>>a>>b>>c;
        if (a+b+c >= 2) {
            ans += 1;
        }
    }
    std::cout<<ans;
}