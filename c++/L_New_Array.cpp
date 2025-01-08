#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n*2);
    for(int i=n;i<2*n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}