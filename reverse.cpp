#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev=0;
    while(n>0)
    {
        int lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    cout<<"The reverse of the number is: "<<rev;
    return 0;
}