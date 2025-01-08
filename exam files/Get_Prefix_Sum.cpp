#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    vector<long long int> v;
    v.push_back(a[0]);
    for(int i=1; i<n; i++)
    {
        v.push_back(v[i-1]+a[i]);
    }
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    return 0;
}