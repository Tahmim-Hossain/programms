#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    string str;
    cin >>str;
    int flag = 0;
    if(str.size()%2!=0)
        flag = 1;
    for (int i = 0;i<str.size();i++)
    {
        if(i%2==0)
        {
            if(str[i]!=str[i+1])
            {
                flag = 1;
                break;
            }
        }
        else 
        {
            if(str[i]==str[i+1]) flag=1;
            break;
        }
    }

    if(flag==0)
        cout << "Yes" << endl;
    else cout<< "No" << endl;
        return 0;
}