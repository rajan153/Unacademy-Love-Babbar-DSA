#include<iostream>
using namespace std;
int fun(int arr[] ,int n)
{
	if(n==1)
	{
		return 1;
	}
	return max(arr[n-1],fun(arr,n-1));
}
int fun1(int arr[], int n)
{
	if(n==1)
	{
		return 1;
	}
	return min(arr[n-1], fun1(arr,n-1));
}
int main()
{
	int arr[]={4,2,6,9,1,0,12};
	cout<<"Max Number: "<<fun(arr,7)<<endl;
	cout<<"Min Number: "<<fun1(arr,7);
}