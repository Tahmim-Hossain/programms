#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, x, y;
        cin >> n;
        cin>>x>>y;
        cout<<static_cast<int> (ceil(n*1.00/min(x,y)))<<endl;
    }
    return 0;
}