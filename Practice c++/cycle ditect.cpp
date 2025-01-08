#include<bits/stdc++.h>
using namespace std;

void list_show(vector<int>&v)
{
    int slow = 1, fast = 1;
    while(true)
    {
        slow = v[slow - 1];
        fast=v[v[fast - 1]-1];
        
        if(slow==fast)
        {
            break;
        }
    }
    int cycle_start = 1;
    while(cycle_start!=slow)
    {
        slow=v[slow-1];
        cycle_start=v[cycle_start-1]; 
    }
    vector<int> it;
    int curr=cycle_start;
    do
    {
        it.push_back(curr);
        curr = v[curr - 1];
        /* code */
    } while (curr!=cycle_start);
    for(auto i:it)
    {
        cout << i << " ";
    }
    cout << endl;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n;i++)
    {
        cin>>a[i];
    }
    list_show(a);
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
