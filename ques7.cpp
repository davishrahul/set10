#include <iostream>
using namespace std;
int main()
{
    int number,rem,sum=0;
    cin>>number;
    while(number>0)
    {
        rem=number%10;
        sum=sum*10+rem;
        number/=10;
    }
    cout<<sum;
}
