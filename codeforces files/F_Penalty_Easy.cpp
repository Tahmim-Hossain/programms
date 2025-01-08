#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        bool possible = false;
        for (int a = 0; a <= 2; ++a) {
            for (int b = 0; b <= 1; ++b) {
                if (X + a == Y + b) {
                    possible = true;
                    break;
                }
            }
            if (possible) break;
        }
        
        if (possible) {
            cout << "YES" << std::endl;
        } else {
            cout << "NO" << std::endl;
        }
    }
    
    return 0;
}
