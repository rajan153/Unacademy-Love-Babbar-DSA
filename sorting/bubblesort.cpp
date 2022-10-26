#include<iostream>
using namespace std;
void BubbleS(int arr[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j],arr[j + 1]);
			}
		}
	}
}
int main()
{
	int arr[]= {5, 8, 9, 1, 2};
	int n = 5;
	BubbleS(arr, n);
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}