#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(std::cin, s))
    {
        sort(s.begin(), s.end());
        s.erase(std::remove(s.begin(), s.end(), ' '), s.end());
        cout<<s<<endl;
    }
    return 0;
}
