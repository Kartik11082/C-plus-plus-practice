#include<string>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int grp=0;
        int i=0;
        while(i<s.size())
        {
            if(s[i] == '1')
            {
                grp++;
                while(s[i]=='1' && i<s.size())
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        cout<<grp<<endl;
    }
    return 0;
}
