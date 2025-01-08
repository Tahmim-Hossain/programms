#include<bits/stdc++.h>
using namespace std;
bool shorter(char a,char b) 
{
    return abs(a-b)==1 || abs(a-b)==4;
}
int main()
{
    string s,t;
    cin>>s>>t;
    if(shorter(s[0],s[1])==shorter(t[0],t[1]))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}