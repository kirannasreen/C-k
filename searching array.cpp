#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n,i;
    int found=0;
    cout<<"Enter the number you want to search: ";
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(arr[i]==n)
        {
            found=1;
            break;
        }
    }
    if (found==1)
    {
        cout<<"Number found at position: "<<i+1;
    }
    else
    {
        cout<<"Number not found.";
    }
    
    return 0;
}