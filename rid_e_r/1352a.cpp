#include <iostream>


int main() {
    int t, k, s;
    int* n;
    std::cin>>t;
    n = new int[t];
    for (int i = 0; i < t; i++) {
        std::cin>>n[i];
    }
    for (int i = 0; i < t; i++) {
        k = 0;
        s = 10;
        while (n[i] * 10 >= s) {
            if ((n[i] % s) - (n[i] % (s / 10)) != 0) k++;
            s *= 10;
        }
        std::cout<<k<<std::endl;
        s = 10;
        while (n[i] * 10 >= s) {
            if ((n[i] % s) - (n[i] % (s / 10)) != 0) {
                std::cout << (n[i] % s) - (n[i] % (s / 10)) << ' ';
            }
            s *= 10;
        }
        std::cout<<std::endl;
    }
    delete[] n;
    return 0;
}