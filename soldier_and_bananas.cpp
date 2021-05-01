#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, n, w;
    int cost = 0;
    cin>>k>>n>>w;
    for(int i = 1; i <= w; i++)
    {
        cost += i*k;
    }
    if(cost > n)
    {
        cout<<abs(cost - n);
    }
    else
    {
        cout<<"0";
    }
    return 0;
}
