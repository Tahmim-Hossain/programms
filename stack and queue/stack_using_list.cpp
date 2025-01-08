#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        list<int> l;
        void pop()
        {
            l.pop_back();
        }
        void push(int val)
        {
            l.push_back(val);
        }
        int top() 
        {
            return l.back();
        }
        int size() 
        {
            return l.size();
        }
        bool empty() 
        {
            if(l.size() == 0)
                return true;
                else
                    return false;
        }
};
int main()
{ 
    myStack list;
    list.empty();
    return 0;
}