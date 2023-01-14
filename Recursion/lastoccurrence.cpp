#include<iostream>
using namespace std;
int lastoccurrence(int arr[], int n, int index, int target)
{
	if(arr[index] == target)
	{
		return index;
	}
	if(index < 0)
	{
		return -1;
	}
	return lastoccurrence(arr, n, index-1, target);
}
int main()
{
	int arr[] = {1,3,4,2,5,4,2,2,1};
	int n = 9;
	int target = 2;
	int index = n-1;
	cout<<lastoccurrence(arr, n, index, target);
	
}