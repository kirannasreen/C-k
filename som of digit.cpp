#include<iostream>
using namespace std;
int main()
{
    int n,num,x,sum=0;
    cout<<"Enter the number: ";
    cin>>n;
    while (n>0)
    {
        /* code */
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    cout<<"The sum of the digits of the number is: "<<sum;
    
    return 0;
}