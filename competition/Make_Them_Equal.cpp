#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c;
        cin >> n>>c;
        string s1, s2;
        cin >> s1 >> s2;
        int x = 0;
        for(int i=0; i<n; i++)
        {
            if(s1[i] !=s2[i])
                x++;
        }
        if(x <= c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}