#include<iostream>
using namespace std;
int main()
{
    float a,b,result;
    char c;
    cout<<"Enter the first value is=";
    cin>>a;
    cout<<"Enter the second value is=";
    cin>>b;
    cout<<"chose your opreator is(+,-,*,/)";
    cin>>c;
    switch(c)
    {
        case '+':
        {
            result=a+b;
        cout<<a<<"+"<<b <<"=" <<result;
        break;
        }
        
        case '/':
    {
        result=a/b;
        if(b!=0)
        {
            cout<<"This division is possible"<<endl;
        }
        else
        {
            cout<<"Invalid division"<<endl;
        }
        cout<<a<<"/"<<b <<"=" <<result;
    }
    }
    
    
    return 0;
}