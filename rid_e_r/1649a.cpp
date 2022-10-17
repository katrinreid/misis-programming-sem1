#include <iostream>

int main() {
    int t=1;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        int n=2;
        std::cin>>n;
        int answer=0;
        int b=5;
        for (int j=0; j<n; j+=1) {
            int a;
            std::cin>>a;
            if (b==0 or a==0) {
                answer += 1;
            }
            b = a;
        }
        std::cout<<answer<<std::endl;
    }
}
