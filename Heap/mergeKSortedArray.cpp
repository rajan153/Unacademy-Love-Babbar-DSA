#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Info{
    public:
    int data;
    int row;
    int col;

    Info(int d, int r, int c)
    {
        this->data = d;
        this->row = r;
        this->col = c;
    }
};

class cmp
{
    public:
    bool operator() (Info a, Info b)
    {
        return a.data > b.data;
    }
};
vector<int> mergeKSortedAraay(vector<vector<int> >& arr, int k)
{
    int n = arr[0].size();
    priority_queue<Info, vector<Info>, cmp> minHeap;
    vector<int> ans;

    //Step1: Put the firs element to all row into the heap
    for(int i = 0; i < k; i++)
    {
        int element = arr[i][0];
        Info temp(element, i, 0);
        minHeap.push(temp);
    }
    while(minHeap.size() > 0)
    {
        //Fetch Top Element
        Info temp = minHeap.top();
        minHeap.pop();

        //Answer Push
        ans.push_back(temp.data);

        //Check if next element exist, if yes then Push in Heap
        if(temp.col + 1 < n)
        {
            Info toPush(arr[temp.row][temp.col+1], temp.row, temp.col + 1);
            minHeap.push(toPush);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr(3, vector<int>(4,0));
    arr[0][0] = 1;
    arr[0][1] = 3;
    arr[0][2] = 5;
    arr[0][3] = 7;

    arr[1][0] = 2;
    arr[1][1] = 4;
    arr[1][2] = 6;
    arr[1][3] = 8;

    arr[2][0] = 0;
    arr[2][1] = 9;
    arr[2][2] = 10;
    arr[2][3] = 11;

    vector<int> ans = mergeKSortedAraay(arr, 3);
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}