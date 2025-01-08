#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
        string name;
        int roll;
        int marks;
        student(string name, int roll, int marks)
        {
            this->marks= marks;
            this->roll = roll;
            this->name = name;
        }
};
class cmp
{
    public:
    bool operator()(student a, student b)
    {
        if(a.marks>b.marks)
            return true;
        else if(a.marks<b.marks) return false;
        else
        {
            if(a.roll>b.roll)
                return true;

            else
                return false;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<student,vector<student>,cmp> q;
    for (int i = 0;i<n;i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        student obj(name,roll,marks);
        q.push(obj);
    }
    while(!q.empty())
    {
        cout << q.top().name << " " << q.top().roll << " " << q.top().marks << endl;

        q.pop();
    }

        return 0;
}