#include<iostream>
using namespace std;
void mergeFunction(int arr[], int mid, int startPoint, int endPoint)
{
	// Get Length of Left Side and Right Side
	int leftLength = mid - startPoint + 1;
	int rightLength = endPoint - mid;
	// create New Arrays for Both
	int *left = new int[leftLength];
	int *right = new int[rightLength];
	
	// Get Original Array.
	int originalIndex = startPoint;
	
	// Add the Value of Left Array in New Left Array
	for(int i=0; i < leftLength; i++)
	{
		left[i] = arr[originalIndex++];
	}
	// Add the Value of Right Array in New Right Array
	originalIndex = mid + 1;
	for(int i=0; i < rightLength; i++)
	{
		right[i] = arr[originalIndex++];
	}
	
	// Now Merge Function is Start
	int leftIndex = 0;
	int rightIndex = 0;
	originalIndex = startPoint;
	while(leftIndex < leftLength && rightIndex < rightLength)
	{
		if(left[leftIndex] <= right[rightIndex])
		{
			arr[originalIndex++] = left[leftIndex++];
		}
		else
		{
			arr[originalIndex++] = right[rightIndex++];
		}
	}
	while(leftIndex < leftLength)
	{
		arr[originalIndex++] = left[leftIndex++];
	}
	while(rightIndex < rightLength)
	{
		arr[originalIndex++] = right[rightIndex++];
	}
}
void mergeSort(int arr[], int startPoint, int endPoint)
{
	if( startPoint >= endPoint)
	{
		return ;
	}
	int mid = startPoint + (endPoint - startPoint)/2;
	// Divide
	
	// Left Side
	mergeSort(arr, startPoint, mid);
	// Right Side
	mergeSort(arr, mid+1, endPoint);
	// Merge
	mergeFunction(arr, mid, startPoint, endPoint);
}
int main()
{
	int arr[] = {10,9, 8, 7, 6, 5, 4, 3, 2, 1};
	int n = 10;
	int startPoint = 0;
	int endPoint = n - 1;
	mergeSort(arr, startPoint, endPoint);
	for(int i=0; i<=endPoint;i++)
	{
		cout<<arr[i]<<" ";
	}
}