#include <iostream>

int main()
{
    int a, b, y = 0;
    std::cin>>a>>b;
    while(a <= b)
    {
        a = 3*a;
        b = 2*b;
        y++;
    }
    std::cout<<y;
    return 0;
}
