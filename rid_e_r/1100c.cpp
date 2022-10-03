#include <iostream>
#include <cmath>
#include <iomanip>
#define M_PIl 3.141592653589793238462643383279502884L


int main() {
    int n=3;
    int r=1;
    std::cin>>n>>r;
    long double ans=0;
    long double a=0;
    a = (M_PIl / n);
    ans = (sin(a)*r) / (1-sin(a));
    std::cout<<std::setprecision(10)<<ans;
}