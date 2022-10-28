#include<bits/stdc++.h>
using namespace std;
int Palindrome(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while(start < end)
    {
        if(arr[start] == arr[end])
        {
            start++;
            end--;
        }
        else
        return -1;
    }
    return true;
}
int main()
{
    int arr[] = {3, 6, 0, 6, 3};
    int n = 5;
    cout<<Palindrome(arr,n);
}