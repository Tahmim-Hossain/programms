#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin>>m>>n;
        string s;
        cin >> s;
        set<char> set;
        for(int i=0; i<m; i++) set.insert(s[i]);
        int x=7-set.size();
        cout << (n * x) + (n - 1) << endl;
    }
    return 0;
}