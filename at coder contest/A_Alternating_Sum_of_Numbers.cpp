#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++)
        {
            if(i%2!=0) sum1=sum1+v[i];
            else sum2=sum2+v[i];
        }
        cout<<sum2-sum1<<endl;
    }
    return 0;
}