#include<iostream>
using namespace std;
int sum(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int division(int a,int b);
int main()
{
    int a,b;
    char c;
    cout<<"Enter the first value is::";
    cin>>a;
    cout<<"Enter the second value is::";
    cin>>b;
    cout<<"Chose the opreator is(+,-,*,/) :";
    cin>>c;
    switch(c)
    {
        case '+':
        {
        cout<<a<<"+"<<b<<"="<<sum(a,b);
        break;
        }
        
    }
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}