#include<iostream>
using namespace std;
int partition(int arr[], int startPoint, int endPoint)
{
	int pivot = arr[endPoint];
	
	int i = startPoint - 1;
	int j = startPoint;
	for(j = startPoint; j<=endPoint - 1; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1], arr[endPoint]);
	return i + 1;
}
void quickSort(int arr[], int startPoint, int endPoint)
{
	if(startPoint >= endPoint)
	{
		return;
	}
	//Find Pivot
	int pivot = partition(arr,startPoint, endPoint);
	// For Left Side
	quickSort(arr, startPoint, pivot-1);
	//For Right Side
	quickSort(arr, pivot+1, endPoint);
}
int main()
{
	int arr[] = {1, 8, 3, 9, 4};
	int n = 5;
	int startPoint = 0;
	int endPoint = n - 1;
	quickSort(arr, startPoint, endPoint);
	//For Printing Array.
	for(int i = 0; i <= endPoint; i++)
	{
		cout<<arr[i]<<" ";
	}
}