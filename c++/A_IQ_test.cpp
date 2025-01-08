#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n);
    vector<int> evens;
    vector<int> odds;
    
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evens.push_back(i + 1);
        } else {
            odds.push_back(i + 1);
        }
    }
    
    if (evens.size() == 1) {
        cout << evens[0] << endl;
    } else {
        cout << odds[0] << endl;
    }
    
    return 0;
}
