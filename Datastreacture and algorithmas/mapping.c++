#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> m;
    unordered_map<int, string> n;
    
    m[1] = "abs";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4, "afg"});
    m.insert(make_pair(7, "wse"));
    map<int, string>::iterator it;
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    auto il = m.find(4);
    if(il==m.end())
        cout << "NO" << endl;
    else
        cout<<(*il).first <<" "<<(*il).second<<endl;

    m.erase(3);
    m.erase(il); // removes the pair.
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    m.clear();
    return 0;
}