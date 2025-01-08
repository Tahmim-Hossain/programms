#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    map<string, int> reg;
    while(t--)
    {
        cin >> s;
        if(reg[s]==0)
        {
            reg[s] = 1;
            cout << "OK" << endl;
        }
        else
        {
            cout<<s<<reg[s]<<endl;
            reg[s]++;
        }
        

    }
    return 0;
}