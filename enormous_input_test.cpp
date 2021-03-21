#include<iostream>
using namespace std;

int main()
{
    unsigned int n, k;
    cin>>n>>k;
    long int  t;
    unsigned int res=0;
    while(n--)
    {
        cin>>t;
        if(t%k==0)
        {
            res++;
        }
    }
    cout<<res<<endl;
    return 0;
}
