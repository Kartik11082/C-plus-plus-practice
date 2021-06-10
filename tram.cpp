#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b;
    int inTrain = 0, maxInTrain = 0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        inTrain -= a;
        inTrain += b;
        if(inTrain >= maxInTrain)
        {
            maxInTrain = inTrain;
        }
    }
    cout<<maxInTrain;
    return 0;
}
