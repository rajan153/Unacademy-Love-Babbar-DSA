#include<bits/stdc++.h>
using namespace std;
int optimalStrategy(int arr[], int i, int j)
{
	if(i > j)
	{
		return 0;
	}
	int player1 = arr[i] + min(optimalStrategy(arr, i+2, j), optimalStrategy(arr, i+1, j-1));
	int player2 = arr[j] + min(optimalStrategy(arr, i + 1, j - 1), optimalStrategy(arr, i, j - 2));
	int ans = max(player1, player2);
	return ans;
}
int main()
{
	int arr[] = {5, 3, 7, 10};
	int i = 0;
	int j = 3;
	cout<<optimalStrategy(arr, i, j);
}