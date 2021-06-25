#include <iostream>
using namespace std;

void reverseArray(int[], int, int);
void printArray(int[], int);

int main()
{
    int n;
    cout<<"Enter size of the array: \n";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of the array: \n";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    // int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    reverseArray(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}

void reverseArray(int arr[], int start, int end)
{
    while(start < end)
    {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;end--;
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<","<<arr[i];
    }
    cout<<"\n";
}
