#include<bits/stdc++.h>
#define ll long long unsigned int
using namespace std;
void solve()
{
    string s;
    cin >>s;
    map<char, int> freq;
    for(ll i=0; i<s.size(); i++)
        freq[s[i]]++;

    for(ll i=0; i<s.size(); i++)
    {
        if (--freq[s[i]] == 0) {
                cout << s.substr(i) << "\n";
                return;
            }
    }
    //cout << s << endl;
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();


    return 0;
}