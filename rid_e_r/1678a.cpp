#include <iostream>
#include <array>


int main() {
    int t, n;
    int a;
    int ans;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        std::cin>>n;
        std::array<int, 101> s{ 0 };
        ans = n+1; // ход на уравнивание двух + ход на приравнивание одного к 0 + ход на приравнивание к 0 оставшихся (n-1)
        for (int j=0; j<n; j+=1) {
            std::cin>>a;
            s[a] += 1;
            if (s[a] > 1) {
                ans = n; // если есть уже уравненные два и более (т.е. вычитаем этот ход)
            }
        }
        if (s[0]) {
            ans = n - s[0]; // если есть 0, то просто приравниваем оставшиеся, это n-1
        }
        std::cout<<ans<<std::endl;
    }
}
