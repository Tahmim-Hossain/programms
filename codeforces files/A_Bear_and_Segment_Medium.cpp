#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int present_number = count(s.begin(), s.end(), '1');
        int connected = 0;
        for (int i = 0; i < s.size();i++)
        {
            if(s[i]=='1')
                connected++;
                if(s[i]=='1' && s[i+1]=='0')
                    break;
        }
        if(present_number!=0)
        {
        if(connected == present_number)
            cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
            else
                cout << "NO" << endl;
        //cout << connected << " " << present_number << endl;
    }
    return 0;
}