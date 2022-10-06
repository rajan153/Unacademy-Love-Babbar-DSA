#include<iostream>
using namespace std;
// using bruteforce technique
int lin(int arr[3][3], int n, int target)
{
    for(int i=0; i < n; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(arr[i][j] == target)
            return true;
        }
    }
    return false;
}
// using binary search 
int search(int arr[][3], int n, int m, int row, int target)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s)/2;
	while(s <= e)
	{
		if(arr[row][mid] == target)
		{
			return true;
		}
		if(arr[row][mid] < target)
		{
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
		mid = s + (e - s)/2;
	}
	return false;
}
bool binary(int arr[][3], int n, int m, int target)
{
	//find a row
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s)/2;
	while(s <= e)
	{
		//check starting row
		if(arr[mid][0] == target)
		{
			return true;
		}
		//check Ending row
		if(arr[mid][m -1] == target)
		{
			return true;
		}
		// check if element is present in between starting and ending element
		if(arr[mid][0] < target && target < arr[mid][m - 1])
		{
			//apply binary search on column
			bool ans = search(arr, n, m, mid, target);
			return ans;
		}
		//check upper part
		if(target < arr[mid][0])
		{
			e = mid - 1;
		}
		//Check Lower part
		else
		{
			s = mid + 1;
		}
		mid = s + (e - s)/2;
	}
	return false;
}
int main()
{
	int arr[3][3] = {1, 5, 9, 14, 20, 23, 30, 34, 43};
	int n = 3;
	int m = 3;
	int target = 34;
	cout<<binary(arr, n, m, target);
    cout<<lin(arr, 9, 20)<<endl;
}