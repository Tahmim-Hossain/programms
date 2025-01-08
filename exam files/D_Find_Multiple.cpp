#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = b % c;
    int y = b - x;
    if(y>=a && y<=b) cout<<y/2<<endl;
    else cout<<"-1"<<endl;
    return 0;
}