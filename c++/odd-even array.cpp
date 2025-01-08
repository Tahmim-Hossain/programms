#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a=i;
        }
        cout<<a<<endl;
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
        {
            b=i;
        }
        
        cout<<b<<endl; 
    }
    
    return 0;

}
