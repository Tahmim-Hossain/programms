#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

int countOperations(int N, vector<int>& A) {
    vector<vector<int>> dp(N + 1, vector<int>(2, 0));
    dp[0][0] = dp[0][1] = 1;

    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (A[j] == A[i - 1] && A[j] != A[j + 1]) {
                dp[i][A[j]] = (dp[i][A[j]] + dp[j][1 - A[j]]) % MOD;
            }
        }
    }

    return (dp[N][0] + dp[N][1]) % MOD;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    cout << countOperations(N, A) << endl;
    return 0;
}
