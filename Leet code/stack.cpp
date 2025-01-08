#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
        queue<int> q;
        MyStack()
        {

        }
        void push(int x)
        {
            q.push(x);
        }
        int pop()
        {
            queue<int> newQ;
            int k,last;
            while(!q.empty())
            {
                int k=q.front();
                q.pop();
                if(q.empty())
                {
                    last = k;
                    break;
                }
                newQ.push(k);
            }
            q = newQ;
            return last;
        }
        int top()
        {
            queue<int> newQ;
            int k,last;
            while(!q.empty())
            {
                int k=q.front();
                q.pop();
                if(q.empty())
                {
                    last = k;
                    //break;
                }
                newQ.push(k);
            }
            q = newQ;
            return last;
        }
        bool empty()
        {
            return q.empty();
        }

};
int main()
{
    return 0;
}