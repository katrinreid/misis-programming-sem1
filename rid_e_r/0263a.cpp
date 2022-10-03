#include <iostream>
#include <string>
#include <cmath>

int main() {
    int stroka;
    int stolb;
    int answer;
    int k;
    for (int i=1; i <= 5; i++) {
        std::string s;
        std::getline(std::cin, s);
        k = s.find("1");
        //std::cout<<k;
        if (k >= 0) {
            stolb = k;
            stroka = i;
        }
    }
    answer = abs(4-stolb)/2 + abs(3-stroka);
    std::cout<<answer;
}