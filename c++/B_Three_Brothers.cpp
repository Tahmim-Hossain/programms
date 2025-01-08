#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for (int i; i <= 2;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout << 6 - (v[0] + v[2]) << endl;
    return 0;
}