#include<iostream>
using namespace std;
int changeCoin(int arr[], int coin, int amount, int currentCoin)
{
	if(amount == 0)
	{
		return 1;
	}
	if(amount < 0)
	{
		return 0;
	}
	int ways = 0;
	for(int i=currentCoin; i < coin; i++)
	{
		ways += changeCoin(arr, coin, amount - arr[i], i);
	}
	return ways;
}
int main()
{
	int arr[] = {1,2};
	int amount = 4;
	int coin = 2;
	int currentCoin = 0;
	cout<<changeCoin(arr, coin, amount,currentCoin);
}