#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]));i++)
    {
        pair<int, int> p;
        p.first = arr[i];
        p.second = i;
        v.push_back(p);
        //v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(),v.end(),myCompare);
    for (int i = 0;i<v.size();i++)
    {
        arr[v[i].second] = i;

    }
    for(int i = 0;i<v.size();i++)
    {
        cout << arr[i] << " ";
    }
        return 0;
}