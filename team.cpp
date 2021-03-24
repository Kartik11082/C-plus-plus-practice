#include<iostream>
using namespace std;

int main()
{
    int n, ans = 0;
    cin>>n;
    while(n--)
    {
        int p, v, t;
        cin>>p>>v>>t;
        if(p+v+t >= 2)
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
