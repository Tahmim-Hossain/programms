#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n >>i;
    vector<int> v, v1, v2;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) v2.push_back(i);
        else v1.push_back(i);
    }
    v.insert(v.end(), v1.begin(), v1.end());
    v.insert(v.end(), v2.begin(), v2.end());
    cout << v[i-1] << endl;
    // for (int i : v) {
    //     cout << i << " ";
    // }
    // cout << endl;
    return 0;
}
