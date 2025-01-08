#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n],a1[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        a1[i]=a[i];
    }
    vector<long long int> v1, v2;
    v1.push_back(a[0]);
    for(int i=1; i<n; i++)
    {
        v1.push_back(v1[i-1]+a[i]);
    }
    reverse(a1,a1+n);
    v2.push_back(a1[0]);
    for(int i=1; i<n; i++)
    {
        v2.push_back(v2[i-1]+a1[i]);
    }
    reverse(v2.begin(), v2.end());
    int  flag = 0,flag2=0;
    for(int i=0; i<n; i++)
    {
        if(v1[i]==v2[i])
        {
            flag = i;
            flag2 = 1;
        }
    }
    long long int sum = v1[flag];
    
    if(flag2)cout<<sum<<" "<<flag+1<<endl;
    else
        cout << "UNSTABLE" << endl;

    return 0;
}