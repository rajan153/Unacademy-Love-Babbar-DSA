#include <iostream>
using namespace std;
int main()
{
  int n=10;
  for(int i=1;i<=n;i++)
  {
    //   if(i<=3){
    //       continue;
    //   }

    // ODD number printing
    if(i%2==0){
        continue;
    }
     cout<<i<<endl;
  }
    return 0;
}