#include <bits/stdc++.h>


using namespace std;

bool findTripletSum(const vector<int>& A, int N, int S) {
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if (A[i] + A[j] + A[k] == S) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        if (findTripletSum(A, N, S)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
