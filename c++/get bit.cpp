#include<iostream>
using namespace std;
int getbit(int n,int pos)
{
    return ((n & (1<<pos)) != 0);
}
int main()
{
    
    cout<<getbit(5,3)<<endl;
 return 0;
}