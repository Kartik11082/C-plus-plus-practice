#include<iostream>
using namespace std;

int main()
{
    unsigned int r, o, c;
    cin>>r>>o>>c;
    if(((20 - o)*36) > (r - c))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
