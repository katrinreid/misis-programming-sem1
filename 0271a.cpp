#include<iostream>


int main() {
    int y=0, flag=0;
    int a=0, b=0, c=0, d=0, x=0;
    std::cin>>y;
    while (flag==0) {
        y = y + 1;
        x = y;
        a = x % 10;
        x = x / 10;
        b = x % 10;
        x = x / 10;
        c = x % 10;
        x = x / 10;
        d = x % 10;
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
            flag=1;
        }
    }
    std::cout<<y;
}
