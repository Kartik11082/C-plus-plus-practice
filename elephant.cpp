#include <iostream>
using namespace std;

int main()
{
    unsigned int x;
    unsigned int steps = 0;
    cin>>x;

    while(x >= 5)
    {
        x -= 5;
        steps++;
    }
    while(x >= 4)
    {
        x -= 4;
        steps++;
    }
    while(x >= 3)
    {
        x -= 3;
        steps++;
    }
    while(x >= 2)
    {
        x -= 2;
        steps++;
    }
    while(x >= 1)
    {
        x--;;
        steps++;
    }
    cout<<steps;
    return 0;
}
