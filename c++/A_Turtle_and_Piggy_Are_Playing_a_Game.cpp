#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, c = 0;
        cin>>x>>y;
        while(true)
        {
            y = y / 2;
            c++;
            if(y==1)
            {
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
