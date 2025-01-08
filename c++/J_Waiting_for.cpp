#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int totalPass = 0;
    while(t--)
    {
        char c;
        int x;
        cin >> c;
        //getchar();
        cin>> x;
        if(c == 'P')
        {
                totalPass =totalPass + x;
            }
        else if(c == 'B')
        {
            //cout << totalPass << endl;
            if(x>totalPass)
                {
                    cout << "YES" << endl;
                    totalPass = 0;
                }
            else
            {
                cout<< "NO" << endl;
                totalPass-=x;
            }
            //else cout<< "No" << endl;
        }
        //else if(c == 'B') cout<< totalPass << endl;
    }
    return 0;
}