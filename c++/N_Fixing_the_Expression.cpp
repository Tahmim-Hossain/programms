#include<bits/stdc++.h>
using namespace std;
string fix(string &s)
{
    int x, y;
    x=s[0]-'0', y=s[2]-'0';
    if(x==y)
        s[1] = '=';
    else if(x>y)
        s[1] = '>';
    else s[1] = '<';

    return s;
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << fix(s) << endl;
    }
    return 0;
}