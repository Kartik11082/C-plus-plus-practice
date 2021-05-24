#include <iostream>
using namespace std;

int main()
{
    unsigned int n, k;
    cin>>n>>k;
    while(k--)
        (n%10 == 0)?(n /= 10):(n--);
    cout<<n;
    return 0;
}
