#include<iostream>
using namespace std;
void linearS(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={7,5,6,2,4};
    linearS(arr,5);
}