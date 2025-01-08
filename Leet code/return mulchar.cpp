#include<bits/stdc++.h>
using namespace std;
string frequencySort(string s) {
    unordered_map<char, int> freq;
    for(auto ch:s)
    {
        freq[ch]++;
    }
    vector<pair<int, char>> v_freq;
    for(auto f:freq)
    {
        v_freq.push_back({f.second, f.first});
    }
    sort(v_freq.begin(), v_freq.end(), greater<pair<int, char>>());
    string result;
    for (auto ch:v_freq)
    {
        result+=string(ch.first,ch.second);
    }
    return result;
    }
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    cout << frequencySort(s) << endl;
    return 0;
}