#include<bits/stdc++.h>
using namespace std;
void algorithm(int n)
{
    cout<<n<<" ";
    while(n!=1)
    {
        
        if(n%2==0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else
        {
            n = (n * 3) + 1;
            cout<<n << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    algorithm(n);
    return 0;
}