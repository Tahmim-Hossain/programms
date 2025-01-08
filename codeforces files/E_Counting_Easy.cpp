#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if(y>=x)
        cout << (y - x) + 1 << endl;
        else 
        {
            cout << "0" << endl;
        }
    return 0;
}