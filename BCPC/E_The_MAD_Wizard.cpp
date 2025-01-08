#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int min, max;
    min = a * 1;
    max = a * 6;
    if(min<=b && max>=b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
