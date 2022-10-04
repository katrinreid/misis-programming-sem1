#include <iostream>
#include <cmath>

int factorial(int i) {
    if (i==0) return 1;
    else return i*factorial(i-1);
}

int main() {
    double a=0;
    double b=1;
    double delta=0.05;
    long double s=0;
    int i=1;
    double e=0.001;
    for (double x=a; x<=b; x+=delta) {
        i = 1;
        s = 0;
        long double ch1;
        ch1 = pow(x, i) * sin(i * M_PI/4);
        s += ch1;
        long double ch2;
        i += 1;
        ch2 = pow(x, i) * sin(i * M_PI/4);
        s += ch2;
        while (abs(ch2-ch1) >= e) {
            ch1 = ch2;
            i += 1;
            ch2 = pow(x, i) * sin(i * M_PI/4);
            s += ch2;
        }
        double y = ((x * sin(M_PI/4)) / (1 - 2*x*cos(M_PI/4)));
        std::cout << x << " | " << s << " | " << y << std::endl;
    }
}
