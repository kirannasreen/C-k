#include<iostream>
using namespace std;
void greet(int ,int);
int main()
{
    int a,b;
    cout<<"Enter the two value::";
    cin>>a>>b;
    cout<<"The sum is two number::";
    greet(a,b);
    return 0;
}
void greet(int a,int b)
{
    // cout<<"The sum is two number";
    cout<<(a+b);   
}