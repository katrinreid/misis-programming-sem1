#include <iostream>

int main() {
    int n=0;
    std::cin>>n;
    for (int i=0; i<n; i+=1) {
        int a=0, b=0, c=0, d=0;
        std::cin>>a>>b>>c>>d;
        if ((a+b+c+d) == 0) {
            std::cout<<0<<std::endl;
        }
        else if ((a+b+c+d) == 4) {
            std::cout<<2<<std::endl;
        }
        else {
            std::cout<<1<<std::endl;
        }
    }
}
