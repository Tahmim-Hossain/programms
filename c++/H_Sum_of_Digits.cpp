#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0,d;
        cin >> n;
        while(n!=0)
        {
            d = n % 10;
            sum = sum + d;
            n = n / 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}