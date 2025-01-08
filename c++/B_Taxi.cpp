#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=a[i]+sum;
    }
    int result;
    result = ceil((sum * 1.0) / 4);
    cout<<result<<endl;

    return 0;
}