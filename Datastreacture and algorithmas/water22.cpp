#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],arr1[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            arr1[i] = arr[i];
        }
        sort(arr,arr+n);
        int max1, max2;
        max1 = arr[n - 1];
        max2=arr[n - 2];
        int arr2[2],idx1,idx2;
        for(int i=0; i<n;i++)
        {
            if(arr1[i]==max1) idx1= i;
            if(arr1[i]==max2)
                idx2= i;
        }
        arr2[0] = idx1;
        arr2[1] = idx2;
        sort(arr2, arr2 + 2);
        //cout << idx1 << " " << idx2 << endl;
        cout<<arr2[0]<<" "<<arr2[1]<<endl;
    }

    return 0;
}