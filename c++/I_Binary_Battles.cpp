#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b,x;
        cin >> n >> a >> b;
        x = log2(n);
        cout << (x * a) + (b * (x - 1)) << endl;
    }
    return 0;
}