#include<bits/stdc++.h>
using namespace std;
int large(int n,int k)
{
    int res = 1;
    while(res*k <=n)
    { 
        res*=k;
    }
    
    return res;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n, k;
    cin>>n>>k;
    if(k==1)
        cout << n << endl;
    else 
    {
        int c = 0;
        while(n> 0) 
        {
            c += n % k;
            n /= k;
        }
        

        cout<<c<<endl;
    }
    //cout<<large(n,k);
    }
    return 0;
}