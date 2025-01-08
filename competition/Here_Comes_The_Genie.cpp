#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    
    long long int sum = 0;
    cin>>n;
    set<int> set;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        set.insert(x);
        
    }
    for(auto v:set)
    {
        sum = sum + v;
    }
    cout<<sum<<endl;
    return 0;
}