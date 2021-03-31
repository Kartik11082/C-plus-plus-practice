#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int i=0, r1 = 0, r2 = 0;
    string s1, s2;
    cin>>s1;
    cin>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
    transform(s2.begin(), s2.end(), s2.begin(), :: tolower);
    int l = s1.length();
    while(l--)
    {
        if(int(s1[i]) < int(s2[i]))
        {
            cout<<"-1";
            return 0;
        }
        else if(int(s1[i]) > int(s2[i]))
        {
            cout<<"1";
            return 0;
        }
        i++;
    }
    cout<<"0";
    return 0;
}
