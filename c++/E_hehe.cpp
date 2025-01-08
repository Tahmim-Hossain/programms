#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,s1,s3;
        cin>>s;
        s1 = s.substr(0, 2);
        s3 = s.substr(2, 3);
        if(s1=="00") cout<<12<<s3<<" "<<"AM"<<endl;
        else if(s1=="12") cout<<s<<" "<<"PM"<<endl;
        else if(s1<"12") cout<<s<<" "<<"AM"<<endl;
        else 
        {
            int x = stoi(s1) - 12;
            if(x>9) cout<<x<<s3<<" "<<"PM"<<endl;
            else cout<<"0"<<x<<s3<<" "<<"PM"<<endl;
        }
    }
    return 0;
}