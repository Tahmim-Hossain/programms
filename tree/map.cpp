#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m.insert({"sakib", 67});
    m.insert({"akib", 70});
    m.insert({"ratul", 91});
    m.insert({"tutul", 88});

    cout << m["akib"] << endl;

    for(auto it=m.begin(); it!=m.end();it++)
    {
        cout<<it->first << endl;
        cout<<it->second << endl;
    }

    return 0;
}