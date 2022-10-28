#include<bits/stdc++.h>
using namespace std;
int pairSum(int arr[], int n, int x)
{
    for(int i=0; i<n; i++)
   {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j] == x)
            return true;
        }
   }
   return false;
}
int main()
{
    int arr[] = {1, -2, 1, 0, 5};
    int x = 0;
    int n = 5;
    cout<<pairSum(arr, n ,x);
}