#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin >> n;
    int a[n];
    for (int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(a[i]+1==a[j])
            c++;
        }
    }
        
    cout<<c<<"\n";
    return 0;
}