#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<number;j++)
    {
        if(arr[j]>arr[j+1])
        {
            cout<<j;
        }
    }
}
