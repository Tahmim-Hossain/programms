#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, sum = 0;
        cin>>x;
        while(x>0)
        {
            sum += x%10;
            x=x/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}

