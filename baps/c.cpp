#include<bits/stdc++.h>
using namespace std;
class jun
{
    public:
    
        void say();
        int add(int a, int b);
    
};
void jun::say()
{
    cout<<"Hello"<<endl;
}
int jun:: add(int a, int b)
{
    return a + b;
}
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    jun test;
    test.say();
    cout<<test.add(102,10)<<endl;
    return 0;
}