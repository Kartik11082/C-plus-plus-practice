#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    getline(cin, word);
    if (word[0] >= 97)
    {
        word[0] -= 32;
    }
    cout<<word;
    return 0;
}
