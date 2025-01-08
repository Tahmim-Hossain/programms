#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,x;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a, a + n);
    for(int i=0; i<n-1; i++) 
    {
        x=(a[n-1]-a[i]);
        s= s + x;
        //cout << x << endl;
    }
    //for(int i=0;i<n;i++) cout<<a[i]<<endl;
    cout<<s<<endl;
    return 0;
}