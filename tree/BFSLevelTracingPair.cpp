#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
bool paisi = false;
void bfs(int src,int dst)
{
    queue<pair<int,int>> q;
    q.push({src,0});
    vis[src] = true;
    level[src] = true;
    while(!q.empty())
    {
        pair<int,int> p=q.front();
        q.pop();
        int par = p.first;
        int level=p.second;
        
        //cout<<par<<endl;
        // for (int i = 0;i<v[par].size();i++)
        // {
        //     int child=v[par][i];
        //     cout<<child<<endl;
        // }
        if(par==dst)
        {
            cout<<level<<endl;
            paisi = true;
        }
            for (int child : v[par])
            {
                if (vis[child] == false)
                {
                    q.push({child, level + 1});
                    vis[child] = true;
                }
        }
    }
    if(paisi==true)
        cout << -1 << endl;
}

int main()
{
    int n,e;
    cin >> n >> e;
    while(e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis,false,sizeof(vis));
    bfs(src,6);
    for(int i=0;i<n;i++)
    {
        cout << level[i] << " ";
    }

    return 0;
}