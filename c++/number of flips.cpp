#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,s=0;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }

        if(x%2==1)
        {
            cout<<"-1"<<endl;
        }
        if(x%2==0)
        {
            for(int i=0;i<x;++i)
            {
                s+=a[i];
            }
            cout<<abs(s/2)<<endl;
        }
        
        
    }  
    return 0;
}