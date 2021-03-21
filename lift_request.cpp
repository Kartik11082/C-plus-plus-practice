#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, q;
        cin>>n>>q;
        int pos=0;
        long long dist=0;
        for(int i=0; i<q; i++)
        {
            int f, d;
            cin>>f>>d;
            dist += abs(pos - f) + abs(f - d);
            pos = d;
        }
        cout<<dist<<"\n";
    }
    return 0;
}
