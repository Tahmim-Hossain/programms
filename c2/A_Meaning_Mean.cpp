#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        sort(a, a + n);
        long long int ans=a[0];
        for (int i = 1;i<n;i++) 
        {
            ans+=a[i];
            ans /= 2;
        }
        cout<<ans<<endl;
    }
    return 0;
}