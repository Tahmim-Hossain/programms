#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[2];
        cin>>a[0]>>a[1];
        sort(a,a+2);
        if(a[1]>2*a[0])
        {
            cout << a[1] * a[1] << endl;
        }
        else 
        {
            a[0] = 2*a[0];
            cout<<a[0]*a[0] << endl;
        }
    }
    return 0;
}