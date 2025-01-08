#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int x,a,b,c,f=0;
    cin>>x>>a>>b>>c;
    vector<int> v;
    
    for(int i=1; i<=x; i++)
    {
        v.push_back(i);
    }
    if(a>b)  swap(a,b);
    for(int i=a; i<=b;i++)
    {
        if(v[i]==c)  f=1;
    }
    if(f==1)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}