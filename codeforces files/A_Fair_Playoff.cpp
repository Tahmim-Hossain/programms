#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr1[2],arr2[2];
        for (int i = 0; i < 2;i++)
            cin >> arr1[i];
        for (int i = 0; i < 2;i++)
            cin >> arr2[i];
        int max1 =*std::max_element(arr1, arr1+2); //new thing.
        int max2 =*std::max_element(arr2, arr2+2);
        sort(arr1, arr1 + 2);
        sort(arr2, arr2 + 2);
        if(arr1[1]<arr2[0] || arr2[1]<arr1[0])
            cout << "NO" << endl;
            else
                cout << "YES" << endl;

    }
    return 0;
}