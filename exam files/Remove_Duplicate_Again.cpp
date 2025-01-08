#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int x;

    while(true)
    {
        cin >> x;
        if(x==-1)
            break;
        myList.push_back(x); 
    }
    myList.sort();
    myList.unique();
    for(auto it=myList.begin(); it!=myList.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}