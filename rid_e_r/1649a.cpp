#include <iostream>

int main() {
    int t=1;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        int n=2;
        std::cin>>n;
        int answer=0;
        int s[n];
        for (int j=0; j<n; j+=1) {
            int a;
            std::cin>>a;
            s[j] = a;
        }
        int first=0;
        int last=n-1;
        for (int j=1; j<n; j+=1) {
            if (s[j] == 1) {
                first = j;
            }
            else {
                break;
            }
        }
        for (int j=(n-2); j>=0; j-=1) {
            if (s[j] == 1) {
                last = j;
            }
            else {
                break;
            }
        }
        if (last <= first) {
            std::cout<<0<<std::endl;
        }
        else {
            answer = last-first;
            std::cout<<answer<<std::endl;
        }
    }
}
