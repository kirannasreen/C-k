#include<iostream>
using namespace std;
void selectionsort()
{
	int n;
	cout<<"Enter the number of element in the array";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1; j<n;j++ )
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	cout<<"Selection sorted array is";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	selectionsort();
	return 0;
}
