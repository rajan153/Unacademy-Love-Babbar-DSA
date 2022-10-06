#include<iostream>
using namespace std;
class human
{
public:
    int age=21;
    string name="Rajan";
    int uni_Roll=69;
};
int main()
{
    human data;
    cout<<"Age is "<<data.age<<endl;
    cout<<"Name is "<<data.name<<endl;
    cout<<"University Roll_No. is "<<data.uni_Roll;
    return 0;
}