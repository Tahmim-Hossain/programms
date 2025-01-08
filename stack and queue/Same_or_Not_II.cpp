#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;
        void push(int val)
        {
            v.push_back(val);
            
        }
        void pop()
        {
            v.pop_back();
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
                else return false;
        }
};
class myQueue
{
    public:
        list<int> v;
        void push(int val)
        {
            v.push_back(val);
            
        }
        void pop()
        {
            v.erase(v.begin());
        }
        int top()
        {
            return v.front();
        }
        int size()
        {
            return v.size();
        }
        bool empty()
        {
            if(v.size() == 0)
                return true;
                else return false;
        }
};
int main()
{
    myStack st;
    myQueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(m ==n)
    {
        bool flag = false;
        while(!st.empty())
        {
            if(st.top() !=q.top())
            {
                flag=true;
            }
            st.pop();
            q.pop();
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