#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Enter the voewl word:: ";
	cin>>a;
	switch(a)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
		case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		
			{
				cout<<"Yes this is word vowel"<<endl;
				break;
			}
		
		default:
		{
		cout<<"Invalid";
		}
	}
	return 0;
}
