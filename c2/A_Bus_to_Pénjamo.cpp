#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, r;
        cin>>n>>r;
        int arr[n];
        long long res = 0, left = 0;
            for(int i=0; i<n; i++){
                cin>>arr[i];
                res += 2*(arr[i]/2);
                r -= arr[i]/2;
                arr[i] = arr[i] % 2;
                if(arr[i]==1) left ++;
            }
            // int lefts = r*2;
            if(r==left || left < r) res += left;
            else{
                left -= r;
                res += (r-left);
            }
            cout << res << endl;
    }
    return 0;
}