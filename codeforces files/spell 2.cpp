#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c=0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='T'||s[i]=='i' || s[i]=='m' || s[i]=='u' ||s[i]=='r')
                c++;
        }
        if(c==5)
            cout << "YES" << endl;
            else
                cout << "NO" << endl;
    }
    return 0;
}