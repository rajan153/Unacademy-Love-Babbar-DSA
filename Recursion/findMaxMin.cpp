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
// Method 2nd to Find Max Number in Array
void findMax1(int arr[], int n, int index, int& maxi)
{
	if(index == n)
	{
		return;
	}
	maxi = max(maxi,arr[index]);
	findMax1(arr, n, index + 1, maxi);
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
// Method 2nd to Find Max Number in Array
void findMin1(int arr[], int n, int index, int& mini)
{
	if(index == n)
	{
		return;
	}
	mini = min(mini,arr[index]);
	findMin1(arr, n, index + 1, mini);
}
int main()
{
	int arr[] = {7,2,15,9,21,18};
	int n = 6;
	int index = 0;
    int maxi = INT_MIN;
    int mini = INT_MAX;
	cout<<"Max Number: "<<findMax(arr,n,index)<<endl;
    findMax1(arr,n,index,maxi);
	cout<<"Max Number: "<<maxi<<endl;
	cout<<"Min Number: "<<findMin(arr,n,index)<<endl;
    findMin1(arr,n,index,mini);
	cout<<"Min Number: "<<mini;
}