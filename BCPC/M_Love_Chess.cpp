#include <bits/stdc++.h>
using namespace std;
int max_knight(int n, int m)
{
	if (m == 1 || n == 1) {
		return max(m, n);
	}
	else if (m == 2 || n == 2) {
		int c = 0;
		c = (max(m, n) / 4) * 4;

		if (max(m, n) % 4 == 1) {
			c += 2;
		}
		else if (max(m, n) % 4 > 1) {
			c += 4;
		}
		return c;
	}
	else {
		return (((m * n) + 1) / 2);
	}
}
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <=t; i++) 
    {
    int n , m;
    cin >> n >> m;
    cout <<"Case "<<i<<": "<< max_knight(n, m)<<endl;
    }

	return 0;
}
