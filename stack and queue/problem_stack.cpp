#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;
        void pop()
        {
            v.pop_back();
        }
        void push(int val)
        {
            v.push_back(val);
        }
        int top() 
        {
            return v.back();
        }
        int size() 
        {
            return v.size();
        }
        bool empty() 
        {
            if(v.size() == 0)
                return true;
                else
                    return false;
        }
};
int main()
{
    myStack s1, s2;
    int sz1, sz2;
    cin >> sz1;
    for(int i = 0; i < sz1; i++)
    {
        int x;
        cin>>x;
        s1.push(x);
    }
    cin >> sz2;
    for(int i = 0; i < sz2; i++)
    {
        int x;
        cin>>x;
        s2.push(x);
    }
    if(sz1==sz2)
    {
        bool flag = false;
        while(!s1.empty())
        {
            if(s1.top()!=s2.top())
            {
                flag = true;
            }
            s1.pop();
            s2.pop();
        }
        if(flag)
            cout << "NO" << endl;
            else cout<< "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}