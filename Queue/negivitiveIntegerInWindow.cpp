#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void negitiveIntegerInWindow(vector<int>& v, vector<int>& ans, int k)
{
    queue<int> q;
    //Step2: Create First Window
    for(int i=0;i<k;i++)
    {
        if(v[i] < 0)
            q.push(i);
    }
    //Step3: Save Answer
    if(q.size() > 0)
        ans.push_back(v[q.front()]);
    else
        ans.push_back(0);
    //Step4: Remaining Element
    for(int i=k; i<v.size(); i++)
    {
        if(!q.empty() && i - q.front() >= k)
            q.pop();
        //Push in Queue
        if(v[i] < 0)
            q.push(i);
        //Answer Store
        if(q.empty())
            ans.push_back(0);
        else
            ans.push_back(v[q.front()]);
    }
}
int main()
{
    vector<int> v;
    v.push_back(-8);
    v.push_back(2);
    v.push_back(3);
    v.push_back(-6);
    v.push_back(10);
    vector<int> ans;
    int k = 2;
    negitiveIntegerInWindow(v, ans, k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}