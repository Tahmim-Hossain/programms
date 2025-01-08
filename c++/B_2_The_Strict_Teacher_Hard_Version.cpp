#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, q;
        cin >> n >> m >> q;
        int tea[m];
        for(int i=0; i<m; i++){
            cin >> tea[i];
        }
        sort(tea, tea+m);
        while(q--){
            int x;
            cin >> x;
            if(x < tea[0]) cout << tea[0] - 1 << endl;
            else if(x > tea[m-1]) cout << n - tea[m-1] << endl;
            else{
                long long low, high;
                // for(int i=0; i<m; i++){
                //     if(tea[i] > x){
                //         low = tea[i-1];
                //         high = tea[i];
                //         break;
                //     }
                // }
                long long left = 0, right = m-1;
                long long mid;
                while(left <= right){
                    mid = (left + right)/2;
                    if(tea[mid] > x){
                        if(mid > 0 && tea[mid - 1] < x){
                            low = tea[mid-1];
                            high = tea[mid];
                            break;
                        }
                        else{
                            right = mid;
                        }
                    }
                    else if(tea[mid] < x){
                        left = mid + 1;
                    }
                    else{
                        right = mid + 1;
                    }
                }
                // cout << low << " " << high << endl;
                long long cells = high - low + 1;
                if(cells % 2 == 1) cout << cells/2 << endl;
                else cout << cells/2 - 1 << endl;
            }
        }
    }
    return 0;
}