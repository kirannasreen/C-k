// function calling with same data type
#include<iostream>
using namespace std;
void print(int a)
{
	cout<<"integer :"<<a<<endl;
}
void print(int a, int b)
{
	cout<<"Two integer is:"<<a <<" , "<<b <<endl;
}
void print(int a, int b, int c)
{
	cout<<"Three integer is :"<<a <<", "<<b <<"," <<c <<endl;
}
int main()
{
	print(12); // call print(int a)
	print(1,2); // call print(int a, int b)
	print(14,15,16); // call print(int a, int b , int c)
	return 0;
}
