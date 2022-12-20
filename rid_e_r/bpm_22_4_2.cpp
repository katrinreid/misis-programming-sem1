#include <iostream>
#include <cmath>

int main() {
    double x = 0, y = 0;
    int yes = 0, no = 0;
    for (int i=0; i<10000; i+=1) {
        std::cin >> x >> y;
        double len = std::pow(std::pow(x, 2) + std::pow(y, 2), 0.5);
        if (len <= 1) {
            if ((x <= 0 and y >= 0)) {
                double n_y = x + 1;
                if (y >= n_y) {
                    yes += 1;
                } else {
                    no += 1;
                }
            } else if (x >= 0 and y <= 0) {
                double n_y = x - 1;
                if (y <= n_y) {
                    yes += 1;
                } else {
                    no += 1;
                }
            }
        } else {
            no += 1;
        }
    }
    double k = (yes * 100 / (yes + no));
    std::cout << k * 0.01 << std::endl;
}
