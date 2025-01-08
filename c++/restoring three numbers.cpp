#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    int arr[4];
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
     x=arr[3]-arr[0];
     y=arr[2]-x;
     z=arr[3]-(x+y);

    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}