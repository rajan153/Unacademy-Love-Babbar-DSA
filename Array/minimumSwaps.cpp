#include<bits/stdc++.h>
using namespace std;
int minimumSwap(int arr[], int n, int k)
{
   int cnt = 0;
   for(int i=0;i<n;i++)
   {
        if(arr[i] <= k)
        {
            cnt++;
        }
   }
   int bad = 0;
   for(int i=0; i<cnt; i++)
   {
        if(arr[i] > k)
        {
            bad++;
        }
   }
   int ans = bad;
   for(int i=0, j = cnt; j<n; i++, j++)
   {
        if(arr[i] > k)
        {
            bad--;
        }
        if(arr[j] > k)
        {
            bad++;
        }
        ans = min(bad,ans);
   }
   return ans;
}
int main()
{
    int arr[] = {2, 7, 9, 5, 8, 7, 4};
    int k = 5;
    int n = 7;
    cout<<minimumSwap(arr, n, k);

}