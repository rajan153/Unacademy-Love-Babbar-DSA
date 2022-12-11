#include<bits/stdc++.h>
using namespace std;
int firstRepeatingNumber(int arr[], int n)
{
    int i = 0;
    int j = 1;
    int ans;
    for(int i = 0;i < n - 1; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}
int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;
    firstRepeatingNumber(arr, n);
}