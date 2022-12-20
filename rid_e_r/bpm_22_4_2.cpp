#include <iostream>
#include <cmath>

int main() {
    double x = 0, y = 0;
    int yes = 0, no = 0;
    while (!std::cin.fail()) {
        std::cin >> x;
        std::cin >> y;
        if ((x <= 0 and y >= 0) and (std::pow(x, 2) + std::pow(y, 2) <= 1)) {
            double n_y = x + 1;
            if (y >= n_y) {
                yes += 1;
            } else {
                no += 1;
            }
        } else if ((x >= 0 and y <= 0) and (std::pow(x, 2) + std::pow(y, 2) <= 1)) {
            double n_y = x - 1;
            if (y <= n_y) {
                yes += 1;
            } else {
                no += 1;
            }
        } else {
            no += 1;
        }
    }
    double k = (yes * 100 / (yes + no));
    std::cout << k * 0.01 << std::endl;
}


// код был верным и до изменения, т.е. решила ещё тогда, но был косяк с выводом ответа
// оказалось, что command+D надо вводить сразу после последнего символа без нажатия на enter и другие клавиши
// чтобы понять это, пришлось переписать код, предыдущий код правильный, но этот мне нравится больше
