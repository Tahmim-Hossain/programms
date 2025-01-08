#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    string sentence;
    getline(std::cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    for(auto it = mp.begin(); it != mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;

    }
    }
    return 0;
}