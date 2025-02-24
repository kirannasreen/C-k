// function with parameter
#include<iostream>
using namespace std;
void greet(string name,int n)
{
	cout<<name<<endl;
	cout<<n;
}
int main()
{
	greet("Hello World!",25);
	return 0;
}
