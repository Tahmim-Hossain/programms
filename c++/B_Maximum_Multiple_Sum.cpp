#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int optimal_x = 2;
        int max_sum = 0;

        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }

        cout << optimal_x << endl;
    }
    return 0;
}
