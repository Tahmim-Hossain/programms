#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        if(n >= k) {
            if(k > 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
            continue;
        }
        k = k - n;
        int count = 1, p = n - 1;
        while(k > 0) {
            k = k - p;
            count++;
            if(k <= 0)
                break;
            k = k - p;
            count++;
            p--;
        }
        cout << count << endl;
    }
    return 0;
}
