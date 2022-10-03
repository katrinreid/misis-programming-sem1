#include<iostream>
#include<string>


int main() {
    std::string nk;
    int n, k;
    std::cin>>n>>k;
    int maxi=-1000000000;
    for (int i=0; i < n; i++) {
        int f, t;
        int ff=-1000000;
        std::cin>>f>>t;
        if (t > k) {
            ff = f - (t - k);
        }
        if (k >= t) {
            ff = f;
        }
        if (ff > maxi) {
            maxi = ff;
        }
    }
    std::cout<<maxi;
}