#include<bits/stdc++.h>
using namespace std;
void findPermutation(int index, vector<string>& output, string& s)
{
    if(index == s.length())
    {
        output.push_back(s);
        return;
    }
    for(int i=index; i<s.length(); i++)
    {
        swap(s[i], s[index]);
        findPermutation(index + 1, output, s);
        swap(s[i], s[index]);
    }
}
int main()
{
    string s = "ABSG";
    vector<string> output;
    int index = 0;
    findPermutation(index, output, s);
    for(int i=0; i<output.size(); i++)
    {
        cout<<output[i]<<endl;
    }
}