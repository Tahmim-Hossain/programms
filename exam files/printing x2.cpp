#include <iostream>
using namespace std;

void printPattern(int n) {
    
    for (int i = n / 2; i > 0; i--) {
        cout << string(n / 2 - i, ' ') << "\\" << string(2 * i - 1, ' ') << "/" << endl;
    }

    
    cout << string(n / 2, ' ') << "X" << endl;

    
    for (int i = 1; i <= n / 2; i++) {
        cout << string(n / 2 - i, ' ') << "/" << string(2 * i - 1, ' ') << "\\" << endl;
    }
}

int main() {
    int x;
    cin >> x;
    printPattern(x);
    return 0;
}