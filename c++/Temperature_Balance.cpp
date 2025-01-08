#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int> v(n);
        for (int i = 0;i<n;i++)
        cin>>v[i];

        long long ib=0,ti=0;
        for(int i = 0;i<n;i++)
        {
            ib+=v[i];
            ti+=abs(ib);
        }
        cout << ti << endl;
    }
    return 0;
}