#include<bits/stdc++.h>
using namespace std;
long long int eq(int n, int x){
    double sum = 0;
    for (int i = 2; i <= n; i+=2){
        sum += pow(x,i);
    }
    return (long long int)sum;
}

int main()
{
    int n,l;
    cin >> l >> n;
    cout<<eq(l, n)<<endl;
    return 0;
}