#include <bits/stdc++.h>
using namespace std;

void generate_sequences(int n, int m, vector<int> &current, vector<vector<int>> &sequences) {
    if (current.size() == n) {
        sequences.push_back(current);
        return;
    }
    
    int start = current.empty() ? 1 : current.back() + 10;
    for (int i = start; i <= m; ++i) {
        current.push_back(i);
        generate_sequences(n, m, current, sequences);
        current.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> sequences;
    vector<int> current;

    generate_sequences(n, m, current, sequences);

    cout << sequences.size() << endl;
    for (const auto &seq : sequences) {
        for (int i = 0; i < seq.size(); ++i) {
            if (i > 0) cout << " ";
            cout << seq[i];
        }
        cout << endl;
    }

    return 0;
}

