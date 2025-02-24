//Units and Charges if-else if program 
#include<iostream>
using namespace std; 
int main()
{
int units;
 float charges;
cout<<"Enter units consumed\n";  
cin>>units; 
if(units<=200)  
{
charges=0.5*units;
}
else if(units>200 && units<=400) 
{
charges=1.5*units; 
}
else if(units>400&& units<=500)
{
charges=2.5*units;
}
else
{
charges=3.0*units;
}
cout<<"Total Charges are"<<charges<<endl; 
}

