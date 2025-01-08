#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string ss = "codeforces";
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]==ss[i])
                c++;
        }
        cout << s.size() - c << endl;
    }
    return 0;
}