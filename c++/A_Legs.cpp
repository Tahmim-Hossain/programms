#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,c,c1=0;
        cin >> n;
        if(n%4==0)
        {
            c = n / 4;
        }
        else 
        {
            c = (n / 4) + 1;
        }
        cout << c << endl;
    }
    return 0;
}