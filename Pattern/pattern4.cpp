//hollow half priamid
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(int j=1;j<=n-i+1;j++)
            {
                cout<<"*";
            }
        }
        else
        {
             cout<<"*";
            for(int j=1;j<=n-i-1;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
            cout<<endl;
    }
    return 0;
}