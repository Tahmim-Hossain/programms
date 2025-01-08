#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr1[n], arr2[n], arr3[n];
        for (int i = 0; i < n;i++)
            cin >> arr1[i];

        for (int i = 0; i < n;i++)
            cin >> arr2[i];
        for (int i = 0; i < n; i++)
        {
            arr3[i] = (arr1[i] * 20) - (arr2[i] * 10);
        }
        sort(arr3, arr3 + n);
        if(arr3[n - 1]<0)
            cout << '0' << endl;
        else cout << arr3[n - 1] << endl;
    }
    return 0;
}