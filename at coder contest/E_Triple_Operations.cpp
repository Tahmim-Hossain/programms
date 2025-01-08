#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int tem = l;
        long long res = 0, res2 = 0, res3=0;
        while(tem>0){
            tem /= 3;
            res++;
            res2++;
        }
        int count = res;
        for(int i=l+1; i<=r; i++){
            if(i%3==0){
                count++;
            }
            res3 += count;
            //cout << "for " << i << "RES " << count << endl;
        }
        //cout << res << " " << res2 << " " << res3 << endl; 

        cout << res + res2 + res3 << endl;
    }
    return 0;
}