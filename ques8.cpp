#include <iostream>
using namespace std;
int main()
{
    int number;
    cin>>number;//4
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];// 1 10 3 4  
    }
    for(int j=0;j<number;j++) //0<4
    {
        if(arr[j]!=j+1) //arr[2]!=3
        {
            cout<<j;//1
        }
    }
}
