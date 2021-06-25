#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool toLowerCase(string s);

int main()
{
    string s;
    getline(cin, s);
    if(toLowerCase(s))
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout<<s;
    return 0;
}

bool toLowerCase(string s)
{
    int lowerLetters = 0;
    int upperLetters = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(int(s[i]) < 91)
        {
            upperLetters++;
        }
        else
        {
            lowerLetters++;
        }
    }
    if(lowerLetters >= upperLetters)
    {
        return true;
    }
    return false;
}
