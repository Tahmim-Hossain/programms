#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y,c=0;
        cin >> x >> y;
        int arr[x];

        for (int i = 0; i < x;i++)
            cin >> arr[i];
        for (int i = 0; i < x;i++)
        {
            if(arr[i]>y)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}