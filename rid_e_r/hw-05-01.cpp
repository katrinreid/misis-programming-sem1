#include <iostream>
#include <cmath>

int factorial(int i) {
    if (i==0) return 1;
    else return i*factorial(i-1);
}

int main() {
    double a=-1;
    double b=1;
    double delta=0.1;
    long double s=0;
    int i=0;
    double e=0.001;
    for (double x=a; x<=b; x+=delta) {
        i = 0;
        s = 0;
        int znam1 = factorial(2 * i);
        long double ch1;
        ch1 = pow(-1, i) * (pow(x, 2*i) / znam1);
        s += ch1;
        long double ch2;
        i += 1;
        int znam2 = factorial(2 * (i));
        ch2 = pow(-1, (i)) * (pow(x, 2*(i)) / znam2);
        s += ch2;
        while (abs(ch2-ch1) >= e) {
            ch1 = ch2;
            i += 1;
            znam2 = factorial(2 * (i));
            ch2 = pow(-1, (i)) * (pow(x, 2*(i)) / znam2);
            s += ch2;
        }
        double y = cos(x);
        std::cout << x << " | " << s << " | " << y << std::endl;
    }
}
