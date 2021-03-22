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
        long int l = str.length();
        if(l < 11)
            cout<<str<<endl;
        else
        {
            cout<<str[0]<<(l - 2)<<str.back()<<endl;
        }
    }
    return 0;
}
