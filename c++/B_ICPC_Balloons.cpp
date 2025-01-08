#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,result;
        cin>>n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        int count_duplicate=0,count_single;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]==s[i+1]) count_duplicate++;
        }
        count_single = n - count_duplicate;
        result=(count_single*2) +count_duplicate;
        cout<<result<<endl;
    }
    return 0;
}