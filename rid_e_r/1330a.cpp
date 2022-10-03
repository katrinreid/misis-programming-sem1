#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>


void f(){
    int n, x;
    std::cin>>n>>x;
    std::vector <int> s(n);
    for (int j=0; j<n; j+=1) {
        std::cin>>s[j];
    }
    sort(s.begin(), s.end());
    std::vector <int> d(500);
    for (int j=0; j<n; j+=1) {
        d[s[j] - 1]=1;
    }
    for (int j=0; j<d.size() && x>0; j+=1) {
        if (!d[j]) {
            d[j]=1;
            x-=1;
        }
    }
    for (int j=0; j<d.size(); j+=1) {
        if (!d[j]) {
            std::cout<<j<<std::endl;
            return;
        }
    }
    std::cout<<d.size()<<std::endl;
}


int main() {
    int t;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        f();
    }
    return 0;
}