#include <iostream>
#include <string>
using namespace std;

int main()
{
    unsigned int n;
    unsigned int c = 0;
    int j = 0;
    string colors;
    cin>>n;
    fflush(stdin);
    getline(cin, colors);

    for(int i = 0; i < colors.length(); i++)
    {
        for(j = i + 1; j < colors.length(); j++)
        {
            if (colors[j] == colors[i])
            {
                c++;
                continue;
            }
            break;
        }
        if(j == colors.length())
            break;

    }

    cout<<(c);
    return 0;
}
