#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    if(n%2==0 )
        cout << "no" << endl;
    else
    {
        vector<int> v,v1;
        v.push_back(a[0]);
        v1.push_back(a[n-1]);
        for(int i=1; i<n; i++)
        {

            v.push_back(v[i-1]+a[i]);
            v1.push_back(v[i-1]+a[n-1-i]);
            if(v[i]==v1[i]) cout<<i<<endl;
        }

    }
    return 0;
}