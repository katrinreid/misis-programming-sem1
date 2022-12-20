#include <iostream>
#include <cmath>

int factorial(int i) {
    if (i == 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int main() {
    double a = 0.1;
    double b = 1;
    double delta = 0.05;

    double e = 0.0001;

    for (double x = a; x <= b; x += delta) {
        double summa = 0;
        for (int i = 1; i<10000; i+=1) {
            int znam = factorial(2 * i);
            double s = std::pow(x, 2 * i) / znam;
            if (s >= e) {
                summa += s;
            } else {
                break;
            }
        }
        std::cout << x << " " << summa << std::endl;
    }
}
