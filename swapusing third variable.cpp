#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"After swapping: a="<<a<<" b="<<b;
    return 0;
}