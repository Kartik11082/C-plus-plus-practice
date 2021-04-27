#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    getline(cin, username);

    int distinctChar = 0;
    int count[26] = {0};

    for(int i = 0; i < username.length(); i++)
    {
        count[(int(username[i]) % 26)] += 1;
    }

    for(int i = 0; i < 26; i++)
    {
        if (count[i] >= 1)
            distinctChar++;
    }

    if(distinctChar % 2 == 0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";

    return 0;
}
