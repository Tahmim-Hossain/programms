#include<bits/stdc++.h>
using namespace std;
int mul(int n,int p )
{
    if(p==0) return 1;
    int preNum=pow(n,p-1); return preNum*n;
}
int main() 
{
    int n,p;
    cin>>n>>p;
    cout<<mul(n,p)<<endl;
    return 0;
}