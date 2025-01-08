#include<bits/stdc++.h>
using namespace std;
long long int countWays(long long int n) {
    long long int count = 0;
    
    
    for (long long int a = 0; a <= n; a++) {
        long long int b = n - a; 
        
        if (a <= b) {
            count++;  
        } else {
            break;  
        }
    }
    
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0;i<n-2;i++) cin>>a[i];

        long long int sum;
        cin>>sum;

        long long int sum1 = 0;
        for(int i = 0;i<n-2;i++) 
        {
            sum1=sum1+a[i];
        }
        long long int sum2 = sum - sum1;

        if(countWays(sum2)%2==0) cout<<countWays(sum2)*2<<endl;
        else cout<<countWays(sum2)*2 - 1<<endl;
    }
    return 0;
}