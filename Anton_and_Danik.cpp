#include <iostream>
#include <string>
using namespace std;

int main()
{
    int A = 0, D = 0, i = 0, n;
    string str;
    cin>>n;
    fflush(stdin);
    getline(cin, str);
    for(i = 0; i < n; i++)
    {
        (str[i] == 'A')?(A++):(D++);
    }
    (A == D)?(cout<<"Friendship"):((A > D)?(cout<<"Anton"):(cout<<"Danik"));

    return 0;
}
