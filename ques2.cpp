#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;
    int arr[number];
    int sum=0;
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
}
