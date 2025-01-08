#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, d, c = 0;
    cin >> n >> d;
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '@')
        {
            s[i] = '.';
            c++;
        }
        if (c == d)
            break;
    }
    cout << s << endl;
    return 0;
}
