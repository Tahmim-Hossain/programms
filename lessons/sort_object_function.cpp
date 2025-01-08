#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b)  //building a compare function.
{
    if(a.marks<b.marks)
        return true; // return a.marks<=b.marks;
        else
            return false;
            if(a.marks==b.marks)
        {
            return a.roll < b.roll;
        }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    //Student *a=new Student[n];   //Dynamic object system. 
    for(int i=0; i<n; i++)
    {
        cin.ignore();
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a,a+n,cmp);  //implementation of compare function.
    
    for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    return 0;
}