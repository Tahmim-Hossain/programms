#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s,s1,s2;
    set<char> l;
    for(int i=0; i<n; i++)
    {
        char c;
        cin >> c;
        s2.push_back(c);
        l.insert(c);
    }
    for(auto i:l)
    {
        s.push_back(i);
    }
    s1 = s;
    reverse(s1.begin(),s1.end());
    string ans;
    for (int i = 0; i < n; i++)
    {
        int x = s1.find(s2[i]);
        ans.push_back(s[x]);
    }
    cout<<ans<<endl;
    }
    return 0;
}