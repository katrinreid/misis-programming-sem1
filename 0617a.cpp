#include <iostream>


int main() {
    int x=0;
    int k=0;
    std::cin>>x;
    while (5<=x) {
        k = k + 1;
        x = x - 5;
    }
    if (0<x) {
        k = k + 1;
    }
    std::cout<<k;
}