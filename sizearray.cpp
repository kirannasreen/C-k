#include<iostream>
using namespace std;
int main()
{
    int marks[5]={1,2,3,4,5};
    int size=5;
    // size of array
    cout<<sizeof(marks)/sizeof(int)<<endl;
    //loops : 0 to size-1
    for (int i = 0; i < size; i++)
    {
        cout<<marks[i]<<endl;
    }
    
    return 0;
}