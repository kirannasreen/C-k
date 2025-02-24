#include<iostream>
using namespace std;
int main()
{
    for(int a=5;a>=1;--a)
    {
        for(int j=5; j>a;--j)
        {
            cout<<" ";
        }
        for(int k=1; k<=a;++k)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}