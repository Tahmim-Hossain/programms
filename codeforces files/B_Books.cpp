#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n;i++)
        cin >> arr[i];

    sort(arr,arr+n);
    int sum = 0;
    vector<int> v;
    v.push_back(arr[0]);
    for(int i = 1;i<n;i++)
    {
        // if(sum < t)
        // {
        //     count++;
        // sum += arr[i];
        // }
        // else
        //     break;
        sum=v[i-1]+arr[i];
        if(sum<t)
            v.push_back(sum);
        else
            break;
    }
    cout << v.size() << endl;
    return 0;
}