#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n;i++) cin>>a[i];
        ll mx1 = 0,mx2=0, sum = 0,sum1=0;
        for(int i = 0; i < n; i=i+2) 
        {
            mx1 = max(mx1,a[i]);
            sum++;
        }
        for(int i = 1; i < n; i=i+2) 
        {
            mx2 = max(mx2,a[i]);
            sum1++;
        }
        cout<<max(mx1+sum,mx2+sum1)<<endl;
        
    }
    return 0;
}