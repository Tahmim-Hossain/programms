#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = 0,sum1=0,sum2=0;
        int a[n], b[n];
        for (int i = 0; i < n;i++)
            {
                cin >> a[i];
            }
            for (int i = 0; i < n; i++)
            {
                cin >> b[i];
            }
            sort(a, a + n);
            sort(b, b + n);
            reverse(a, a + n);
            reverse(b, b + n);
            for (int i = 0; i < k;i++)
            {
                sum1 = sum1 + a[i];
                sum2 = sum2 + b[i];
            }
            if(sum1>sum2)
            {
                for (int i = 0; i < k;i++)
                {
                    sum = sum + a[i];

                }
                for (int i = 0; i < n - k;i++)
                {
                    sum = sum + b[i];
                }
            }
            else 
            {
                for (int i = 0; i < k;i++)
                {
                    sum = sum + b[i];

                }
                for (int i = 0; i < n - k;i++)
                {
                    sum = sum + a[i];
                }
            }
                cout << sum << endl;
        
    }

    return 0;
}