#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        sort(a,a+n);
    for(int i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
            {
                flag = 1;
                break;
            }
    }
    //cout << flag << endl;

    if(flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}