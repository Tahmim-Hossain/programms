#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v1,v2;
    for(int i=0; i<n; i++) 
    {
        cin>>a[i];
        v1.push_back(a[i]);
    }
    int n2;
    cin>>n2;
    int b[n2];
    for (int i = 0;i<n2;i++)
    {
        cin>>b[i];
        v2.push_back(b[i]);
    }
    int x;
    cin >> x;
    v1.insert(v1.begin() + x, v2.begin(), v2.end());
    for (int y:v1)
        cout << y << " ";
    return 0;

}