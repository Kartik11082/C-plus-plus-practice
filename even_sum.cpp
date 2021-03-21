#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long T;
	cin>>T;
	while(T--)
	{
	    long long N;
	    cin>>N;
	    long long A[N];
	    long long count_even=0;
	    long long count_odd=0;
	    for(long long i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]%2==0)
	        {
	            count_even++;
	        }
	        else
	        {
	            count_odd++;
	        }
	    }
	    if(count_odd%2==0)
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<2<<endl;
	    }
	}
	return 0;
}
