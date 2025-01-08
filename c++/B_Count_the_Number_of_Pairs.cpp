#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, o;
        cin>>n>>o;
        string s;
        cin >> s;
        vector<int> v1(26,0),v2(26,0);
        
        for(char c:s)
        {
            if(c>='A' && c<='Z') v1[c - 'A']++;
            else  v2[c - 'a']++;
        }
        
        int ans = 0;
        for (int i = 0; i <26;i++)
        {
            int pair = min(v1[i],v2[i]);
            ans += pair;
            v1[i]-=pair;
            v2[i]-=pair;
            
        }
        for(int i = 0; i <26 && o>0; i++)
        {
            int a=min(o,max(v1[i],v2[i])/2);
            o-=a; ans+=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}
