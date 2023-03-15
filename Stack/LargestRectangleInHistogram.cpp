#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmaller(vector<int>& heights) {
    stack<int> s;
    s.push(-1);

    int n = heights.size();
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        int item= heights[i];

        while(s.top() != -1 && heights[s.top()] >= item) {
            s.pop();
         }

        //push in ans
        if(s.top() == -1)
            ans[i] = n;
        else 
            ans[i] = s.top();
        
        s.push(i);
    }
    return ans;
}
vector<int> prevSmaller(vector<int>& heights) {
    stack<int> s;
    s.push(-1);

    int n = heights.size();
    vector<int> ans(n);

    for(int i=0; i<n; i++) {
        int item= heights[i];

        while(s.top() != -1 && heights[s.top()] >= item) {
            s.pop();
        }

        //push in ans
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangleArea(vector<int>& heights) {
    vector<int> prev = prevSmaller(heights);
    vector<int> next = nextSmaller(heights);

    int maxArea = INT_MIN;

    for(int i=0; i<heights.size(); i++) {
        int length = heights[i];
        int breadth = next[i] - prev[i] - 1;
        int newArea = length * breadth;
        maxArea = max(maxArea, newArea);
    }
    return maxArea;
}
int main()
{
    vector<int> heights;
    heights.push_back(2);
    heights.push_back(1);
    heights.push_back(5);
    heights.push_back(6);
    heights.push_back(2);
    heights.push_back(3);
    vector<int> prev = prevSmaller(heights);
    vector<int> next = nextSmaller(heights);

    cout<<"Find Next Element Smaller: "<<endl;
    for(int i=0;i<next.size();i++)
    {
        cout<<next[i]<<" ";
    }
    cout<<endl;
    cout<<"Find Prev Element Smaller: "<<endl;
    for(int i=0;i<prev.size();i++)
    {
        cout<<prev[i]<<" ";
    }
    cout<<endl;
    cout<<largestRectangleArea(heights);
}