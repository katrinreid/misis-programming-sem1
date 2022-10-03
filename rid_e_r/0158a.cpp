#include <iostream>


int main() {
    int n=1, k=1;
    std::cin>>n>>k;
    int ans=0;
    int last=0;
    for (int i=0; i<n; i+=1) {
        int b=0;
        std::cin>>b;
        if (ans < k && b > 0) {
            ans += 1;
        }
        if (ans >= k && b == last && b > 0) {
            ans += 1;
        }
        if (i+1 == k) {
            last = b;
        }
    }
    std::cout<<ans;
}