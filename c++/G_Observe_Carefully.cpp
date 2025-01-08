#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long  int a,x,y,z,b;
        cin >> a;
        x = a / 9;
        y= a % 9;
        z = x * 45;
        b = (y * (y + 1)) / 2;
        cout<<z+b<<endl;
    }
    return 0;
}