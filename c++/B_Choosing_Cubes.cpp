#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int favorite_value = a[f - 1];
        sort(a.begin(), a.end(), greater<int>());

    int count_greater = 0, count_equal = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > favorite_value) {
            count_greater++;
        } else if (a[i] == favorite_value) {
            count_equal++;
        }
    }

    if (count_greater >= k) {
        cout<<"NO"<<endl;
    } else if (count_greater + count_equal <= k) {
        cout<<"YES"<<endl;
    } else {
        cout << "MAYBE" << endl;
        
    }
        
    }

    return 0;
}
