#include<iostream>
using namespace std;
//with bruteforce technique
// int peakMountain(int arr[], int n)
// {
//     int i = 0;
//     while(arr[i] < arr[i + 1])
//     {
//         i++;
//     }
//     return i;
// }

// with binary Search
int peak(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;
    while(s < e)
    {
        if(arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return mid;
}
int main()
{
    int arr[] = {0,2,1,0};
    // cout<<peakMountain(arr,4)<<endl;
    cout<<peak(arr, 4);
}