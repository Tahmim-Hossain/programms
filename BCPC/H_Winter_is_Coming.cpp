#include<bits/stdc++.h>
using namespace std;

const double PI = 2 * acos(0.0);

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        double n;
        cin >> n;
        double R = n * 2.0; 
        double areaSquare = R*R;
        double areaCircle = PI * n * n;
        double areaShaded = areaSquare - areaCircle;
        
        cout << "Case " << i << ": " << fixed << setprecision(2) << areaShaded << endl;
    }

    return 0;
}