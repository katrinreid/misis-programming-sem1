#include <iostream>
#include <string>

int main() {
    std::string a = "", b = "";
    std::cin >> a >> b;
    int count = 0;
    int l1 = a.length() - 1;
    int l2 = b.length() - 1;
    if (l1 == 0 and l2 == 0) {
        std::cout << "0";
    }
    else {
        int len = std::min(l1, l2);
        for (int i=len; i>=0; i -= 1) {
            if (a[l1] != b[l2]) {
                break;
            } else {
                count += 1;
                l1 -= 1;
                l2 -= 1;
            }
        }
        int answer = (a.length() - count) + (b.length() - count);
        std::cout << answer;
    }

}
