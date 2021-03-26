#include<iostream>
#include<string>
using namespace std;

int main()
{
    unsigned int n;
    int x = 0;
    string oper;
    cin>>n;
    while(n--)
    {
        cin>>oper;
        if(oper[0] == '+' || oper[1] == '+')
            x++;
        if(oper[0] == '-' || oper[1] == '-')
            x--;
    }
    cout<<x;
    return 0;
}
