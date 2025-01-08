#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence;
    sequence.push_back(n);

    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        sequence.push_back(n);
    }
    for (int i = 0; i < sequence.size(); ++i) {
        cout << sequence[i];
        if (i != sequence.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
