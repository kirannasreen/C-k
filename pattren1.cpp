#include<iostream>
using namespace std;
int main()
{
    for(int a=1; a<=5; a++)
    {
        //for rows
        for(int b=1; b<=a; b++)
        {
            // for print area
            cout<<"* ";
        }
        cout<<endl;
    }   
    return 0;
}