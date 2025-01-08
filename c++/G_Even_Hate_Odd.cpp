#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,odd=0,even=0,odd_count,even_count;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(n%2==0)
        {
            n = n / 2;
            odd_count = abs(odd - n);
            even_count = abs(even - n);
            cout<<min(odd_count,even_count)<<endl;
        }
        else cout<<"-1" << endl;
    }
    return 0;
}