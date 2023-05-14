#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    //Creation
    unordered_map<char, int> m;
    string name = "Babbar";

    //Insertion

    //First we can write or insert
    m.insert(make_pair('a', 3));
    // 2nd we can write or insert
    m['b'] = 2;
    //3rd we can write or insert
    m.insert({'a', 3});

    //Access
    cout<<m['b']<<endl;
    cout<<m['z']<<endl;

    cout<<m.size()<<endl; // tell the size;

    cout<<m.empty()<<endl; // check map is empty or not;

    cout<<m.count('c')<<endl; // if Element is present then it will give 1 else 0;

    //Traverse
    unordered_map<char,int> :: iterator i = m.find('a');

    if(i != m.end())
    {
        cout<<"Element Found! "<<endl;
    }
    else
        cout<<"Element Not Found! "<<endl;





    return 0;
}