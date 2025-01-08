#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long countOdd = (n + 1) / 2;
    
    if (k <= countOdd) {
        // k-th odd number
        cout << 2 * k - 1 << endl;
    } else {
        // (k - countOdd)-th even number
        cout << 2 * (k - countOdd) << endl;
    }

    return 0;
}
