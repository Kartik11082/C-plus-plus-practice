#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i = 0, res1 = 0, res2 = 0;;
    string str1;
    string str2;
    cin>>str1;
    cin>>str2;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(int(str1[i]) == int(str2[i]) || (int(str1[i]) - int(str2[i]) == 32) || (int(str1[i]) - int(str2[i]) == -32));
        else if(int(str1[i]) - int(str2[i]) < 32)
        {
            res2++;
        }

        else if(int(str1[i]) - int(str2[i]) > 32)
        {
            res1++;
        }
        i++;
    }
    if(res1 > res2)
        cout<<1;
    if(res1 < res2)
        cout<<-1;
    else
        cout<<0;
    return 0;
}
