#include<iostream>
using namespace std;
int main()
{
	int number , i=1,f=1;
	cout<<"Enter the positive integer=";
	cin>>number;
	while(i<=number)
	{
		f *=i;
		++i;
	}
	cout<<"Fectorial of"<<number<<"="<<f;
		return 0;
}
