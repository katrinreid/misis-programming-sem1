#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin>>t;
    for (int i=0; i<t; i+=1) {
        int n;
        std::cin>>n;
        int a[101];
        int b[101];
        int tm[n];
        for (int j=0; j<(n); j+=1) {
            long long A;
            long long B;
            std::cin>>A;
            std::cin>>B;
            a[j] = A;
            if (j != (n-1)) {
                b[j] = B;
            }
        }
        for (int j=0; j<n; j+=1) {
            long long x;
            std::cin>>x;
            tm[j] = x;
        }
        int left=0; //время, когда покинул станцию
        int arrive=0; //время, когда приехал на станцию
        arrive = left + (a[0]) + tm[0]; //приехал на первую станцию
        left = std::max(b[0], arrive + (b[0]-a[0]+1)/2); //выехал с первой станции
        for (int j=1; j<(n); j+=1) {
            arrive = left + (a[j] - b[j-1]) + tm[j];
            left = std::max(b[j], arrive + (b[j]-a[j]+1)/2);
        }
        std::cout<<arrive<<std::endl;
    }
}

