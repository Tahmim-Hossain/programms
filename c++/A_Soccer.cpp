#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a>b && c<d)
        {
            cout << "NO" << endl;

        }
        else if(a<b && c>d)
        {
            cout<<"NO" << endl;
        }
        else 
        {
            cout<<"YES" << endl;
        }
    }
    return 0;
}