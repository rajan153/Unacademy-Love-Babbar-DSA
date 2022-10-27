#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string s1, string s2)
{
    int freq[26] = {0};

    //for s1
    for(int i=0;i<s1.length();i++)
    {
        char ch = s1[i];
        int index = ch - 'a';
        freq[index]++;
    }

    //for s2
    for(int i=0;i<s2.length();i++)
    {
        char ch = s2[i];
        int index = ch - 'a';
        freq[index]--;
    }

    for(int i=0;i<26;i++)
    {
        if(freq[i] != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "rajan";
	string s2 = "najpr";
	cout<<checkAnagram(s1,s2);
}