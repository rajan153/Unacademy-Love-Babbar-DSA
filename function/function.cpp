// Pass by Value

// #include<iostream>
// using namespace std;
// void printFun(int a){
//     a=25;
//     cout<<"Hello Duniya: "<<a;
//     cout<<endl;
// }
// int main()
// {
//     int a=5;
//     printFun(a);
//     cout<<"In main Function: "<<a;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void Rajan()
// {
//     cout<<"Hello Rajan."<<endl;
// }
// void ramesh()
// {
//     Rajan();
//     cout<<"Ramesh Function"<<endl;
// }
// void divide(int a,int b)
// {
//     ramesh();
//     int c=a/b;
//     cout<<"This is divide Function: "<<c<<endl;
// }
// void add(int a,int b)
// {
//     divide(10,5);
//     int c=a+b;
//     cout<<"This is Add Function: "<<c<<endl;
// }
// int main()
// {
//     add(3,2);
//     cout<<"This is main function..."<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
// void sqrNum(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i*i<<endl;
//     }
// }
// void evenNum(int n)
// {
//     for(int i=2;i<=n;i=i+2)
//     {
//         cout<<i<<" ";
//     }
// }
void fact(int n)
{
    double fact=1.0;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
        cout<<fact;
}
void nam(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"Rajan"<<endl;
    }
}
int main()
{
    nam(10);
    fact(5);
    // sqrNum(6);
    // evenNum(20);
    return 0;
}













