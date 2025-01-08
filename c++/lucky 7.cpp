#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,d,sum=0;
        cin>>n;
        while(n!=0)
        {
            d=n%10;
            if(d==4)
            {
                sum=sum+1;
            }
            n=n/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
