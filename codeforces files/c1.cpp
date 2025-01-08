#include<bits/stdc++.h>
using namespace std;
void fast_IO();
void solve();
vector<int> extractNumbs(int num);
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
vector<int> extractNumbs(int num)
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
    int num;
    cin>>num;
    vector<int> v;
    //v=extractNumbs(num);
    //printNums(v);
    cout << extracting(num);
    }