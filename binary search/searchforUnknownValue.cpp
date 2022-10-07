#include<iostream>
using namespace std;
int searchUnknownValue(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while( start <= end)
    {
        if(arr[mid] == target)
        {
            return mid;
        }
        if(arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2; // updation
    }
    return -1;
}
int main()
{
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    int n = 6;
    cout<<searchUnknownValue(arr, n, target); // print index value of present element
}