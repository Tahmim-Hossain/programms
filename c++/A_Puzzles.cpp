#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m;i++) cin>>arr[i];
    sort(arr,arr+m);
    cout << arr[n - 1] - arr[0] << endl;
    return 0;
}