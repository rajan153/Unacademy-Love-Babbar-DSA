#include<iostream>
using namespace std;
int firstoccurrence(int arr[], int n, int index, int target)
{
	if(arr[index] == target)
	{
		return index;
	}
	if(index == n)
	{
		return -1;
	}
	return firstoccurrence(arr, n, index+1, target);
}
int main()
{
	int arr[] = {1,3,2,3,6,4,3};
	int n = 7;
	int target = 3;
	int index = 0;
	cout<<firstoccurrence(arr, n, index, target);
	
}