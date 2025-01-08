#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n >> i;

    vector<int> v(n); 

    int oddIndex = 0;
    int evenIndex = (n + 1) / 2; 

    for (int j = 1; j <= n; j++) {
        if (j % 2 != 0) {
            v[oddIndex++] = j;
        } else {
            v[evenIndex++] = j;
        }
    }

    cout << v[i - 1] << endl;

    return 0;
}
