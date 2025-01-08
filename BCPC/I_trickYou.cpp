#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,flag=0;
        string n;
        cin>>c>>n;
        for(int i=0;i<c;i++)
        {
            if(n[i]=='5' || n[i]=='0') 
            {
                flag = 1;
                break;
            }
        }
        if(flag==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}