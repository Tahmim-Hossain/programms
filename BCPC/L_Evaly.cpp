#include<bits/stdc++.h>
using namespace std;
int main()
{
    int round, limit, shipping_fee,cost,product,total=0;
    cin >> round >> limit >> shipping_fee;
    for(int i=0; i<round; i++)
    {
        cin >> cost >> product;
        total=total+(cost*product);
    }
    if(total<limit)
        cout << total + shipping_fee << endl;
    else cout << total << endl;
    return 0;
}