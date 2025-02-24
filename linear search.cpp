#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int search,found=0;
    cout<<"Enter the number you want to search: ";
    cin>>search;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==search)
        {
            found=1;
            cout<<"No is found at index["<<i<<"]";
            break;
        }
    }
    if(found==0)
    {
        cout<<"Number not found.";
    }
    return 0;
}