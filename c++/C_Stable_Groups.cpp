#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, x, k,j=0,l=0;
    cin >> n >> x >> k;
    long long int arr[n];

    for (long long int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    
    vector<long long int>gap_dif;
    for (long long int i = 0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i] ) > k ) 
        {
            gap_dif.push_back(arr[i+1]-arr[i]);
        }
        //cout << arr[i] << " ";
    }
    sort(gap_dif.begin(),gap_dif.end());
    int gaps = gap_dif.size();
    // for(int i = 0;i<gaps;i++)
    //     cout << gap_dif[i] << " ";
    // while (x > 0 && j < gaps)
    // {
    //     long long int div_k = ceil(gap_dif[j] / k)-1;
    //     // if(gap_dif[j] % k == 0)
    //     //     l++;
    //     if (div_k >= 1)
    //     {
    //         long long int reduce_by = min(x,div_k );
    //         x -= reduce_by;
    //         gaps--;
    //     }
    //     j++;
    // }

    for (int i= 0;i<gap_dif.size();i++)
    {
        x-=gap_dif[i]/k;
        if(gap_dif[i] % k==0)
            x++;
        if(x>=0)
            gaps--;
        else
            break;
    }
        cout << (gaps + 1) << endl;
    //cout << c << endl;
    return 0;
}