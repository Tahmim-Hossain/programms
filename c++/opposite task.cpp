#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=10)
        {
            cout<<'0'<<" "<<n<<endl;
        }
        if(n>10)
        {
            cout<<(n/2)<<" "<<n-(n/2)<<endl;
        }
    }
    return 0;
}