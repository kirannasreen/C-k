#include<iostream>
using namespace std;
inline int multiply(int a, int b)
{
    return a*b;
}
int main()
{
    int a=10, b=20;
    cout<<multiply(a,b);
    return 0;
}