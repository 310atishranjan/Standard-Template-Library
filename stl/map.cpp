/*#include<bits\stdc++.h>
using namespace std;
int main()
{
    /*pair<int,string> p[3];
    p[0]={1,"atish"};
    p[2]={2,"ranjan"};
    p[1]={3,"singh"};
    for(int i=0;i<3;i++)
    cout<<p[i].first<<" "<<p[i].second<<endl;
    for(auto value:p)//same value print
    cout<<value.first <<" "<<value.second<<endl;*/

    /*pair<string,string> str[2];
    str[1]={"atish","ranjan"};
    str[0]={"atish","singh"};
    for(auto value:str)
    cout<<value.first<<" "<<value.second<<endl;*/

    //map

   /* map<int,string> m;
    m[1]="abc";
    m[3]="ads";
    m[2]="asd";
    for(auto value:m)
    {
        cout<<value.first<<" " << value.second<<endl;
    }*/

   /* map<int,int> m;//m[1] is key element
    m[1]=1;
    m[0]=2;
    m[-1]=3;
    m[0]=5;//copy in previous m[0]..
    m.erase(1);
    for(auto value:m)
    cout<<value.first<<" "<<value.second<<endl;*/
    /*auto i=m.find(0);
    if(i==m.end())
    cout<<"not found"<<endl;
    else
    cout<<(*i).first<<" "<<(*i).second<<endl;*/
    /*m.clear();
    for(auto value:m)
    cout<<value.first<<" "<<value.second<<endl;*/

    /*map<string,int> m;
    for(int i=0;i<4;i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }
    for(auto value:m)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }*/

    //unorderedmap..

    /*unordered_map<int,string> m;
    m[1]="abc";
    m[5]="def";
    m[3]="asd";
    m[4]="adf";
    for(auto value:m)
    cout<<value.first<<" "<<value.second<<endl;

    
    return 0;
}*/
#include <iostream>
using namespace std;
void reverse(string s)
{
    int i=0;
    int e=s.size();
    
    while(i<e)
    {
        swap(s[i],s[i+1]);
        i=i+2;
        if(e%2!=0)
        {
            if(i==(e-1))
            break;
        }
    }
    string s1=s;
    cout<<s1;
    for(int i=0;i<e;i++)
    {
        s1[i]='z'-s1[i]+'a';
    }
    cout<<endl;
    cout<<s1;
}
int main()
{
    	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
	    string s;
	    cin>>s;
        cout<<endl;
	    reverse(s);
	}
	return 0;
}
