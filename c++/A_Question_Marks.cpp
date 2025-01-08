#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        sort(s.begin(), s.end());
        int a, b, c, d;
        a=count(s.begin(), s.end(),'A');
        b=count(s.begin(), s.end(),'B');
        c=count(s.begin(), s.end(),'C');
        d=count(s.begin(), s.end(),'D');
        //cout<<s<<endl;
        //cout << a << b << c << d << endl;
        int sum = 0;
        int arr[4];
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        arr[3] = d;
        for (int i = 0; i < 4;i++)
        {
            if(arr[i]>n)
                sum = sum + n;
            else sum=sum +arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
