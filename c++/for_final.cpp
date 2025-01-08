#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, w;
        cin >> n >> w;
        int val[n], wei[n];
        for (int i = 0; i < n; i++){
            cin >> wei[i];
        }
        for (int i = 0; i < n; i++){
            cin >> val[i];
        }
        int dp[n + 1][w + 1]={0};
        for (int i = 1; i < n; i++){
            for (int j = 0; j <= w; j++){
                if(i==0 || j==0){
                    dp[i][j] = 0;
                }
            }
        }
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= w; j++){
                if(wei[i-1] <= j){
                    int option1 = dp[i - 1][j - wei[i - 1]] + val[i - 1];
                    int option2 = dp[i - 1][j];
                    dp[i][j] = max(option1, option2);
                }
                else{
                    int option2 = dp[i - 1][j];
                    dp[i][j] = option2;
                }
            }
        }
        cout << dp[n][w] << endl;
    }
    return 0;
}