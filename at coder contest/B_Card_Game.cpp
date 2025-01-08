#include <iostream>
using namespace std;

int countWins(int a1, int a2, int b1, int b2) {
    
    pair<int, int> suneet_cards[] = { {a1, a2}, {a2, a1} };
    pair<int, int> slavic_cards[] = { {b1, b2}, {b2, b1} };
    
    int suneet_count = 0;
    
    for (auto sc : suneet_cards) {
        for (auto slc : slavic_cards) {
            int suneet_wins = 0;
            int slavic_wins = 0;
            
            
            if (sc.first > slc.first) {
                suneet_wins += 1;
            } else if (sc.first < slc.first) {
                slavic_wins += 1;
            }
            
            
            if (sc.second > slc.second) {
                suneet_wins += 1;
            } else if (sc.second < slc.second) {
                slavic_wins += 1;
            }
            
        
            if (suneet_wins > slavic_wins) {
                suneet_count += 1;
            }
        }
    }
    
    return suneet_count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        
        int result = countWins(a1, a2, b1, b2);
        cout << result << '\n';
    }
    
    return 0;
}

