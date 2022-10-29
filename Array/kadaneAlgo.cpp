#include<bits/stdc++.h>
using namespace std;
int kadaneAlgo(int arr[], int n)
{
    int mIn = INT_MIN;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        cnt = cnt+arr[i];
        mIn = max(mIn,cnt);
        if(cnt<0)
        cnt=0;
    }
    return mIn;
}
int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = 8;
    cout<<kadaneAlgo(arr, n);
}