#include <iostream>
using namespace std;
int main()
{
    // Square pattern
    //     int n;
    //     cout<<"Enter the Number: "<<endl;
    //     cin>>n;
    //    for(int i=1;i<=n;i++)
    //    {
    //        for(int j=1;j<=n;j++)
    //        {
    //            cout<<" * ";
    //        }
    //          cout<<endl;
    //    }

    // Triangle pattern
    //  int n=5;
    //  for(int i=1;i<=n;i++)
    //  {
    //      for(int j=1;j<=i;j++)
    //      {
    //          cout<<" * ";
    //      }
    //      cout<<endl;
    //  }

    // opposite Traingle pattern
    //  int n=5;
    //  for(int i=1;i<=n;i++)
    //  {
    //      for(int j=1;j<=n-i+1;j++)
    //      {
    //          cout<<" * ";
    //      }
    //      cout<<endl;
    //  }

    // Right half triangle
    //  int n=5;
    //  for(int i=1;i<=n;i++)
    //  {
    //      for(int j=1;j<=n-i;j++){
    //          cout<<" ";
    //      }
    //      for(int j=1;j<=i;j++){
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // opposite right triangle
    //  int n=5;
    //  for(int i=1;i<=n;i++){
    //      for(int j=1;j<=i-1;j++){
    //          cout<<"-";
    //      }
    //      for(int j=1;j<=n-i+1;j++)
    //      {
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // Diamond HomeWork
    //      int n = 6;
    //     for(int i=1;i<=n;i++)
    //     {
    //      for(int j=1;j<=n-i;j++)
    //      {
    //          cout<<" ";
    //      }
    //      for(int j=1;j<=i;j++)
    //      {
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //     }
    //  for(int i=1;i<=n;i++){
    //      for(int j=1;j<=i-1;j++)
    //      {
    //          cout<<" ";
    //      }
    //      for(int j=1;j<=n-i;j++)
    //      {
    //          cout<<" *";
    //      }
    //      cout<<endl;
    //  }

// hollo full triangle
    int n = 5;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++)
        {
            if(j==1 || j==i*2-1)
            {
                cout<<"*";
            }
            else if(i==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }





















    return 0;
}