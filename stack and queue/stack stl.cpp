#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int x;
    cin >> x;
    st.push(x);
    st.pop();
    st.size();
    cout<<st.top()<<endl;
    return 0;
}