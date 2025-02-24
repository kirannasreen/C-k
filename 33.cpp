#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n=1;
    for(int i=n; i<=4; i++)
    {
        for(int j=1; j<=i; j--)
        {
            cout << i<<" ";
        }
        cout << endl;
        
    }
    return 0;

}



