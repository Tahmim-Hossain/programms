#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    int b;
    cout<<"enter the number of boxes"<<endl;
    cin >> b;
    vector<string> box_col(b);
    cout << "enter the name of the boxes" << endl;
    for(int i = 0; i < b; i++)
    {
        cin>>box_col[i];
    }
    unordered_map<string, string> box;
    int n;
    cin >> n;
    string box_name;
    while(b--)
    {
    vector<string> products(n);
    for(int i = 0; i < n; i++)
    {
        cin>> products[i];
    }
    cin >> box_name;
    for (int i = 0;i<n;i++)
    {
        box[products[i]]=box_name;
    }
    }
    int flag = 0;
    string res;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < b;j++)
        {
            if (box[s] == box_col[j])
                {
                    flag = 1;
                    res = box_col[j];
                    break;
                }
        }
        if (flag)
                cout << res << endl;

            else
                cout << "not found" << endl;
    }

        return 0;
}