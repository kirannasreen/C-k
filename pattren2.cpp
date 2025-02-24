#include<iostream>
using namespace std;
int main()
{
    for(int a=1; a<=5; a++)
    {
        //row area
        for(int b=5 ; b>=a; b--)
        {
            // for start is decreasing
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}