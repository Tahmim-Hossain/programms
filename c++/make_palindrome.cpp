#include<bits/stdc++.h>
using namespace std;
string make_palindrome(string & str)
{
    unordered_map<char, int> frq;
    for(auto ch: str)
    {
        frq[ch]++;
    }
    int oddcharCnt = 0;
    char oddChar='\0';
    for(auto &pair : frq)
    {
        if(pair.second %2 != 0)
        {
            oddcharCnt++;
            oddChar = pair.first;
        }
    }
    if(oddcharCnt>1)
        return "not possible";

    string half = "", middle = "";
    for(auto &pair : frq)
    {
        string temp(pair.second/2,pair.first);
        if(pair.second %2 != 0)
        {
            middle += oddChar;
        }
        half += temp;
    }

    string palindrome = half + middle + string(half.rbegin(), half.rend());
    return palindrome;
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        string got=make_palindrome(s);
        cout<<got<<endl;
    }
    return 0;
}