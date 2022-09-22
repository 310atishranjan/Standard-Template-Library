#include<bits/stdc++.h>
using namespace std;
void print(set<int> &s)
{
    for(auto value:s)
    cout<<value<<endl;
}
int main()
{
    /* set <int> s;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);

    }*/
   /* s.insert(5);
    s.insert(4);
    s.insert(4);
    s.insert(0);
    s.insert(1);
    s.insert(100);*/
   // print(s);
    //unordered_set
    set<string> s;
    for(int i=0;i<5;i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"element to check"<<endl;
    for(int i=0;i<3;i++)
    {
        string str1;
        cin>>str1;
        if(s.find(str1)==s.end())
        cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
    return 0;
}