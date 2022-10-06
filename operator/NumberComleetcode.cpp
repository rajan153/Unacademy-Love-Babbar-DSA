#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    int mask=0;
    while(mask<n)
    {
        mask=(mask<<1) | 1;
    }
    int ans =(~n) & mask;
    cout<<ans;
    return ans;
}