#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, ans, op;
    char ch,eq;
    cin >>x>> ch>> y>>eq>>op;
    if(ch == '+')
        ans = x + y;
        else if(ch == '-')
            ans = x - y;
            else if(ch == '*')
                ans = x * y;
    if(ans == op) cout<<"Yes"<<endl;
    else cout<<ans<<endl;
    //cout<<ch<<endl;
    return 0;
}