#include <iostream>
#include <string>
#include <vector>


// ввод - кому дарил этот человек?
// вывод - кто дарил этому человеку?

int main() {
    int n;
    std::cin>>n;
    int s[100];
    for (int i=1; i<=n; i+=1) {
        int a;
        std::cin>>a;
        //std::string k = std::to_string(i);
        s[a-1] = i;
        //s = s.substr(0, a-1) + k + s.substr(a, n);
    }
    for (int i=0; i<n; i+=1) {
        if (s[i] == 0) {
            break;
        }
        else {
            std::cout<<s[i];
            std::cout<<" ";
        }
    }
}
