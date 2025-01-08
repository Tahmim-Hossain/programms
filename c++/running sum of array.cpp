#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i<n; i++) cin>>a[i];
    vector<int> v;
    v.push_back(a[0]);
    for(int i=1; i<n; i++) 
    {
        int x = v[i - 1] + a[i];
        v.push_back(x);
    }
    //cout<<v.size()<<endl;
    for(int i=0; i<n; i++) cout<<v[i]<<" ";

    return 0;
}