#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row-1;col++){
            cout<<" ";
        }
            for(int col=1;col<=n-row+1;col++){
            cout<<" * ";
            }
            cout<<endl;
        
    }
return 0;
}