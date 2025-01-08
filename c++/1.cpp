#include<bits/stdc++.h>
using namespace std;
vector<int> middle()
{
    int x, y;
    vector<int> v;
    vector<int> v2;
    cin >> x;
    for (int i = 0;i<x;i++)
    {
        cin >> y;
        v.push_back(y);
    }
    for (int i = 0; i <x ; i++)
    {
        if(v[i-1]>v[i] && v[i+1]>v[i])
        {
            v2.push_back(v[i]);
        }
    }
    return v2;
}
int main()
{
    vector<int> v=middle();
    for(int c: v)
    {
        cout<<c<<endl;
    }
    return 0;
}