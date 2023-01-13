#include<iostream>
using namespace std;
int findMax(int arr[], int n, int index)
{
	//For find Max Number in Array
	if(index == n)
	{
		return INT_MIN;
	}
	int ans = arr[index];
	int reAns = findMax(arr,n,index+1);
	return max(ans,reAns); 
}
int findMin(int arr[], int n, int index)
{
	//For find Min Number in Array
	if(index == n)
	{
		return INT_MAX;
	}
	int ans = arr[index];
	int reAns = findMin(arr, n, index+1);
	return min(ans,reAns);
}
int main()
{
	int arr[] = {7,2,15,9,21,18};
	int n = 6;
	int index = 0;
	cout<<"Max Number: "<<findMax(arr,n,index)<<endl;
	cout<<"Min Number: "<<findMin(arr,n,index);
}