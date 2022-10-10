#include <iostream>
#include <string>
#include <set>
#include <algorithm>


int main() {
    std::string s="";
    std::string c;
    int k=0;
    std::cin>>c;
    for (int i=0; i<c.length(); i+=1) {
        int a;
        a = s.find(c[i]);
        if (a == -1) {
            s += c[i];
            k += 1;
        }
    }
    if (k % 2 == 0) {
        std::cout << "CHAT WITH HER!";
    }
    else {
        std::cout << "IGNORE HIM!";
    }
}