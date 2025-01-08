#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(i==n/2){
            for (int j = 0; j<n/2; j++){
                cout << " ";
            }
            cout << " ";
            for (int j = 0; j<n; j++){
                cout << "*";
            }
        }
        else{
            for(int j=0; j<2*n; j++)
        {
            if(n==j+i || n==j-i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        }
        // for(int j=0; j<2*n; j++)
        // {
        //     if(n==j+i || n==j-i)
        //     {
        //         cout << "*";
        //     }
        //     else
        //     {
        //         cout << " ";
        //     }
        // }
        
        cout << endl;
        
    }
    return 0;
}