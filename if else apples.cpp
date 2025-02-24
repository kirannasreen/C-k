#include<iostream>
using namespace std; 
int main()
{
	int people, apples, difference;
cout << "How many people do you have?\n"; 
cin >> people;
cout << "How many apples do you have?\n";
cin >> apples;
if(apples == people)
cout << "Everybody gets one apple.\n";
else if(apples > people)
{
difference = apples - people;
cout << "Everybody gets one apple, & there are "<< difference << " extra apples.\n";
}
else
{
difference = people - apples;
cout << "Buy " << difference << " more apples so that everyone gets one apple.\n";
}
return 0;
}
