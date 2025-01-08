#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> v1, v2; 
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            v1.push_back(a[i]);
        } else {
            v2.push_back(a[i]);
        }
    }

    int maxEven = numeric_limits<int>::min();
    int maxOddSum = numeric_limits<int>::min();

    if (v1.size() >= 1) {
        maxEven = *max_element(v1.begin(), v1.end());
    }
    if (v1.size() >= 2) {
        sort(v1.rbegin(), v1.rend()); 
        maxEven = max(maxEven, v1[0] + v1[1]);
    }

    if (v2.size() >= 2) {
        sort(v2.rbegin(), v2.rend());
        maxOddSum = v2[0] + v2[1];
    }
    int result = max(maxEven, maxOddSum);
    if (result < 0) {
        
        result = maxEven;
    }

    cout << result << endl;
    return 0;
}
