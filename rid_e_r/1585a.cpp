#include <iostream>


int main() {
    int t;
    std::cin>>t;
    while (t--) {
        int n;
        int k = 1;
        int o = 0; //нули
        int e = 0; //единицы
        std::cin>>n;
        for (int i = 0; i < n; i += 1) {
            int a=0;
            std::cin>>a;
            if (a == 0 && o != 2) {
                o += 1;
                e = 0;
            } else if (a == 1 && o != 2) {
                o = 0;
                if (e >= 1) {
                    k += 5;
                    e += 1;
                } else {
                    k += 1;
                    e += 1;
                }
            }
            if (o == 2) {
                k = -1;
            }
        }
        std::cout<<k<<std::endl;
    }
}