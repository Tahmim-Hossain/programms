#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int mx = 0;
        for (int i = 0; i <= 5;i++)
        {
            for(int j = 0; j <= 5; j++)
            {
                for(int k = 0; k <= 5;k++)
                {
                    if(i+j+k>5)
                        continue;
                        mx=max(mx,((a+i)*(b+j)*(c+k)));
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}