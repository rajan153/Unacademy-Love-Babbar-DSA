#include <bits/stdc++.h>
using namespace std;
int pairSum(int arr[], int n, int x)
{
    // this is given TLE
    //     for(int i=0; i<n; i++)
    //    {
    //         for(int j=i+1; j<n; j++)
    //         {
    //             if(arr[i]+arr[j] == x)
    //             return true;
    //         }
    //    }
    //    return false;

    // this is optimise approach
    int i = 0;
    int j = n - 1;
    sort(arr, arr + n);
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            return true;
        }
        if (arr[i] + arr[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}
int main()
{
    int arr[] = {1, -2, 1, 0, 5};
    int x = 0;
    int n = 5;
    cout << pairSum(arr, n, x);
}