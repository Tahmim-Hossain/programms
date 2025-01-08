#include<bits/stdc++.h>
using namespace std;

double find_max_pair_probability(vector<int>& A) {
    int N = A.size();
    int max_sum = INT_MIN;
    int max_pair_count = NULL;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int pair_sum = A[i] + A[j];
            if (pair_sum > max_sum) {
                max_sum = pair_sum;
                max_pair_count = 1;
            } else if (pair_sum == max_sum) {
                ++max_pair_count;
            }
        }
    }
    
    int total_pairs = N * (N - 1) / 2;
    return static_cast<double>(max_pair_count) / total_pairs;
}

int main() {
    int T;
    cin >> T;
    vector<double> results(T);
    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }
        results[t] = find_max_pair_probability(A);
    }
    
    cout << fixed << setprecision(8);
    for (double result : results) {
        cout << result << endl;
    }
    
    return 0;
}
