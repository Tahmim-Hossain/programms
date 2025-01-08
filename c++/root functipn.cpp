#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin>>number;
    float min=0, max, mid;
    max = number;
    flag:
    mid = (max-min) / 2;
        if((mid*mid)>max)
            {  
                max = mid;
                goto flag;
            }
        if((mid*mid)<min)
            {
                min= mid;
                goto flag;
            }
            cout << mid << endl;
                //if ((mid * mid) == number)
            

                return 0;
}