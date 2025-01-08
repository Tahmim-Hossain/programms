#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        //getline(cin,s);
        cin >> s;
        string s1(s.size(),s[0]);
        //cout << s1 << endl;
        if(s1==s) cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            for(int i=0;i<s.size();i++)
            {
                if(s[0]!=s[i])
                {
                swap(s[i],s[0]);
                }
            }
            
            cout<<s<<endl;
        }
    }
    return 0;
}