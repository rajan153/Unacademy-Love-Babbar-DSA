#include<iostream>
using namespace std;
void print(int arr[], int n, int index)
{
	// First Method
	if(index == n)
	{
		return;
	}
	print(arr,n,index+1);
	cout<<arr[index]<<" ";
}
void print1(int arr[], int n){
	//Second Method
	if(n < 0)
	{
		return;
	}
	cout<<arr[n]<<" ";
	print1(arr, n-1);
}
void print2(int arr[], int n, int index)
//	Third Method
{
	if(n == 0)
	{
		return ;
	}
	print(arr+1,n,index);
	cout<<arr[index]<<" ";
}
int main()
{
	int arr[] = {1,3,5,9,7};
	int n = 5;
	int index = 0;
	print(arr,n,index);
	cout<<endl;
	print1(arr,n-1);
	cout<<endl;
	print2(arr,n-1,index);
}