#include<bits/stdc++.h>
using namespace std;
bool knows(int a, int b, int arr[4][4])
{
    return arr[a][b];
}
int findCelebrity(int arr[4][4], int n)
{
    stack<int> s;
    for(int i=0; i<n; i++)
    {
        s.push(i);
    }
    //First Element
    int first = s.top();
    s.pop();
    //Second Element 
    int second = s.top();
    s.pop();
    //Compare
    if(knows(first, second, arr))
        s.push(second);
    else
        s.push(first);
    int candidate = s.top();
    //Verification
    bool checkRow = true;
    for(int i=0;i<n;i++)
    {
        if(i!=candidate && arr[candidate][i] == 1)
        {
            checkRow = false;
            break;
        }
    }
    bool checkCol = true;
    for(int i=0;i<n;i++)
    {
        if(i!=candidate && arr[i][candidate] == 0)
        {
            checkCol = false;
            break;
        }
    }
    if(checkRow & checkCol)
        return candidate;
    else
        return -1;
}
int main()
{
    int arr[4][4] = {{0, 0, 1, 0},
                     {0, 0, 1, 0},
                     {0, 0, 0, 0},
                     {0, 0, 1, 0},};
    cout<<findCelebrity(arr, 4);
}