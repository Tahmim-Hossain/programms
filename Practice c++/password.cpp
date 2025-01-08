#include<bits/stdc++.h>
using namespace std;
string password(int min,int max,string s)
{
    string st = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0,j=st.size()-1,cnt=0,num=1,k=0;
        string str = "";
        while(cnt!=min)
        {
            if(cnt%3==0)
            {
                if(cnt%2==0)
                {
                    //cout << st[i];
                    str.push_back(st[i]);
                    cnt++;
                    i++;
                }
                else 
                {
                    //cout << st[j];
                    str.push_back(st[j]);
                    cnt++;
                    j--;
                }
            }
            else if(cnt%3==1)
            {
                //cout << num % 10;
                str.push_back((char)num%10);
                cnt++;
                num++;
            }
            else 
            {
                //cout << s[k % s.size()];
                str.push_back(s[k % s.size()]);
                k++;
                cnt++;
            }
            
        }
        return str;
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int min,max;
        string s;
        cin >> min >> max >> s;
        
    while(n--)
    {
        cout << password(min, max, s) << endl;
        
    }
    return 0;
}