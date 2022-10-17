#include <iostream>

int main() {
    int n;
    std::cin>>n;
    std::string s;
    std::cin>>s;
    int x=0;
    int y=0;
    int answer=0;
    int flY=0;
    int flX=0;
    for (int i=0; i<n; i+=1) {
        if (s[i] == 'U') {
            y += 1;
            if (i==0) {
                flY = 1;
            }
            if (y>x && 1 == flX) {
                answer += 1;
                flY = 1;
                flX = 0;
            }
        }
        else {
            x += 1;
            if (i==0) {
                flX = 1;
            }
            if (x>y && flY == 1) {
                answer += 1;
                flX = 1;
                flY = 0;
            }
        }
    }
    std::cout<<answer;
}
