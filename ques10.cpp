#include <iostream>
using namespace std;
int main()
{
    int rem,product=1,number;
    cin>>number;
    while(number>0)
    {
        rem=number%10;
        product*=rem;
        number/=10;
    }    
    cout<<product;
}
