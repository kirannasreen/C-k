#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={3,4,8,9,1,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	for (int i=0;i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
