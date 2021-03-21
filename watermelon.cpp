#include<iostream>
using namespace std;

int main()
{
    int w;
    cin>>w;
    int t = w;
    while(--w)
    {
        if(w%2 == 0 && (t-w)%2 == 0)
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
