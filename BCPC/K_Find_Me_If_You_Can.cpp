#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,sum,found_sum;
    cin>>n;
    x = n - 1;
    int a[x];
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
        sum = a[i]+sum;
    }
    found_sum = (n*(n+1LL))/2LL;
    cout<<found_sum-sum<<endl;
    return 0;
}