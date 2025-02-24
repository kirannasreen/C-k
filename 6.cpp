#include<iostream>
using namespace std;
int main()
{
    int n=5 , k=1;
    for (int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cout<<k++<<" ";
        }
    cout << endl;
    }

    return 0;
}