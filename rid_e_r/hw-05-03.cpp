#include <iostream>
#include <cmath>

int factorial(int i) {
    if (i==0) return 1;
    else return i*factorial(i-1);
}

int main() {
    double a=0;
    double b=1;
    double delta=0.1;
    long double s=0;
    int i=0;
    double e=0.0001;
    for (double x=a; x<=b; x+=delta) {
        i = 0;
        s = 0;
        int znam1 = factorial(i);
        long double ch1;
        ch1 = pow(2*x, i) / znam1;
        s += ch1;
        long double ch2;
        i += 1;
        int znam2 = factorial(i);
        ch2 = pow(2*x, i) / znam2;
        s += ch2;
        while (abs(ch2-ch1) >= e) {
            ch1 = ch2;
            i += 1;
            znam2 = factorial(i);
            ch2 = pow(2*x, i) / znam2;
            s += ch2;
        }
        double y = exp(2*x);
        std::cout << x << " | " << s << " | " << y << std::endl;
    }
}