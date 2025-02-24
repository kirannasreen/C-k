#include<iostream>
using namespace std;
int main()
{
    int n,max,num,c;
    cout<<"Enter the number of random numbers you want: ";
    cin>>n;
    cout<<"Enter the maximum value of random number: ";
    cin>>max;
    cout<<n<<"random number from 0 to"<<max<<"are: "<<endl;
    randomize();
    for(c=1;c<=n;c++)
    {
        num=random(max);
        cout<<num<<endl;
    } 
    return 0;
}