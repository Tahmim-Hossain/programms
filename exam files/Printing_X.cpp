#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n / 2; i > 0; i--) {
        cout << string(n / 2 - i, ' ') << "\\" << string(2 * i - 1, ' ') << "/" << endl;
    }

    
    cout << string(n / 2, ' ') << "X" << endl;

    
    for (int i = 1; i <= n / 2; i++) {
        cout << string(n / 2 - i, ' ') << "/" << string(2 * i - 1, ' ') << "\\" << endl;
    }
    return 0;
}
