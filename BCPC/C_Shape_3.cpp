#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        x = n - i;
        for(int j = 1; j <=x ; j++)
        {
            cout << " ";
        }
        for (int j = 1;j<=(i*2)-1; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <i ; j++)
        {
            cout << " ";
        }
        x = 2 * n - (2 * i - 1);
        for (int j = 1;j<=x; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}