#include<iostream>


int main() {
    char a;
    int b=0;
    while (std::cin>>a) {
        b += (42<a & a<46) ? (44-a) : 0;
    }
    std::cout<<b/2;
}