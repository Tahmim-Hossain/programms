#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    double r;
    cin >> r;
    const double pi = 3.141592653;
    double area,R;
    R=(r * r);
    area = pi * R;
    cout<<fixed<<setprecision(9)<<area<<endl;
    return 0;
}