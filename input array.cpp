#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the store value of string";
    cin>>a;
    int array[a];
    for(int i=0;i<a;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<a;i++)
    {
        cout<<array[i]<<" ";
    }

}
