#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    vector<int> v1;
    int n;
    cin >> n;
    vector<int> v2(n);
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);    
        v2[i]=x;
    }
    sort(v2.begin(), v2.end());
    auto y=find(v2.begin(), v2.end(), "1");
    cout <<*y<<endl;
    // for(int i = 0; i < n; i++)
    // {
    //     cout<<v1[i]<<" "<<v2[i]<<endl;
    // }
    return 0;
}