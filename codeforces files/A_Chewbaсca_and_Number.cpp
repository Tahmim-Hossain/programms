#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fast_IO();
void solve();
vector<int> extractNumbs(ll num);
int extracting(int num);
void printNums(vector<int> v);
int main()
{
    solve();
    return 0;
}
void fast_IO()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
}
vector<int> extractNumbs(ll num)
{
    vector<int> extracted; // Global can not be used in these cases;
    if(num == 0)
        return {};
    extracted=extractNumbs(num/10);
    extracted.push_back(num%10);
    return extracted;
}
void printNums(vector<int>v)
{
    for(auto i:v)
    {
        cout << i << " ";
    }
}
int extracting(int num)
{
    if(num == 0) return 0;
    if(num>0)
        return num % 10;

    return extracting(num / 10);
}


void solve()
{
    ll num;
    cin>>num;
    vector<int> v;
    v=extractNumbs(num);
    bool flag = false;
    //printNums(v);
    if(v[0]==9)
        flag=true;
    for (int i = 0; i < v.size();i++)
    {
        
        if((9-v[i])<5)
            v[i] = 9 - v[i];
    }
    if(flag)
        v[0] = 9;
    for(int i = 0; i <v.size();i++) cout<<v[i];
    }