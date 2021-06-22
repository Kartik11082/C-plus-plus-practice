#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string revStr, str;
    getline(cin, str);
    getline(cin, revStr);
    bool x = true;
 
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != revStr[revStr.length() - i - 1])
            x = false;
    }
 
    if(x == true)
        cout<<"YES";
    else
        cout<<"NO";
 
    return 0;
}
