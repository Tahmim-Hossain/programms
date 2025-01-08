#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c = 0;
    for(int i=1; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                int s = 0;
                s = i + k + j;
                if(s==n)
                {
                    //cout << i << j << k << endl;
                    c++;
                }
            }
        }
    }
    cout<<c<<endl;
    for(int i=1; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            for(int k=0; k<10; k++)
            {
                int s = 0;
                s = i + k + j;
                if(s==n)
                {
                    cout << i << j << k << endl;
                    
                }
            }
        }
    }
    return 0;
}