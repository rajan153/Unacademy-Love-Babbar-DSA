#include<bits/stdc++.h>
using namespace std;
int findAllOccurence(int arr[], int n, int index, int target , vector<int>& ans)
{
    if(arr[index] == target)
    {
        ans.push_back(index);
    }
    if(index == n)
    {
        return -1;
    }
    return findAllOccurence(arr, n, index+1, target, ans);
}
int main()
{
    int arr[] = {1,3,2,3,6,4,3};
	int n = 7;
    int index = 0;
    int target = 2;
    vector<int> ans;
    findAllOccurence(arr, n, index, target, ans);
    for(int i=0;i<=ans.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}