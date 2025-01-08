
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>>t;
    while (t--) {
        int n;
        cin >> n; 

        vector<int> heights(n);
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        int max_area = 0;
        pair<int, int> best_pair = {0, 0};

        
        for (int i = 0; i < n-1; ++i) {
            for (int j = i+1 ; j < n; ++j) {
                int height = min(heights[i], heights[j]);
                int width = j - i;
                //int area= height * width;
                int area = heights[i]*heights[j];
                
                if (area > max_area) {
                    max_area = area;
                    best_pair = {i, j};
                }
            }
        }

        
        cout << best_pair.first << " " << best_pair.second << endl;
    }

    return 0;
}
