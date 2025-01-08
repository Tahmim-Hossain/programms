#include<bits/stdc++.h>
using namespace std;
void print(int value, char letter)
{
    for(int i = 0; i <value; i++)
    cout<<letter<<" ";
    cout << endl;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int value;
        cin >> value;
        char letter;
        cin >> letter;
        print(value, letter);
    }
    return 0;
}