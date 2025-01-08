#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a[3];
        for(int i = 0; i < 3; i++) cin>>a[i];
        vector<int> v;
        v.push_back(abs(a[0]-a[1]));
        v.push_back(abs(a[1]-a[2]));
        v.push_back(abs(a[0]-a[2]));
        sort(v.begin(), v.end());
        cout << v[2] << endl;
        
    }
    return 0;
}