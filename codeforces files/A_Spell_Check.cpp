#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        string s2="Timur";
        cin >> s;
        sort(s.begin(), s.end());
        //cout << s << endl;
        sort(s2.begin(), s2.end());
        if(s==s2)
            cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }
    return 0;
}