#include<bits/stdc++.h>
using namespace std;
void processQueries(int q) {
    vector<int> vec;
    
    for (int i = 0; i < q; ++i) {
        int x;
        cin >> x;
        
        if (x == 1) {
            int val1;
            cin >> val1;
            if (vec.size() < 2) {
                vec.insert(vec.begin(), val1);
            } else {
                vec.insert(vec.begin() + 1, val1);
            }
        } else if (x == 2) {
            int val2;
            cin >> val2;
            if (vec.size() < 2) {
                vec.push_back(val2);
            } else {
                vec.insert(vec.end() - 1, val2);
            }
        }
    }
    
    for (const int &num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int q;
    cin >> q;
    processQueries(q);
    return 0;
}
