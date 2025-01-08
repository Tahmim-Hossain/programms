#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int x,f=0;
    cin>>x;
    for(int i=0;i<n;i++) 
    {
        if(a[i]==x)
            {
                f = i;
                break;
            }
        else
            f = -1;
    }
    cout << f << endl;

    return 0;
}