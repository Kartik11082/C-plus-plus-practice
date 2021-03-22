#include<iostream>
#include<string>
using namespace std;

int main()
{
    unsigned int n;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        if(str.length() < 11)
            cout<<str<<"\n";
        else
        {
            cout<<str[0]<<(str.length() - 2)<<str.back()<<"\n";
        }
    }
    return 0;
}
