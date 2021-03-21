#include<iostream>
using namespace std;

int main()
{
    int n, h, x, a, res = 0; 
    cin>>n>>h>>x;
    while(n--)
    {
        cin>>a;
        if((a + x) >= h)
        {
            cout<<"Yes";
            res = 1;
            break;
        }
    }
    if(res != 1)
        cout<<"No";
    return 0;
}
