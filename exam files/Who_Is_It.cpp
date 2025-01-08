#include <bits/stdc++.h>
using namespace std;
class Student {
public:
    int unique_id;
    string name;
    char section;
    int total_marks;

    Student(int id, string n, char s, int marks)
        : unique_id(id), name(n), section(s), total_marks(marks) {}

    void print() const {
        cout << unique_id << " " << name << " " << section << " " << total_marks << endl;
    }
};

bool compare(const Student &a, const Student &b) {
    if (a.total_marks != b.total_marks)
        return a.total_marks > b.total_marks;
    return a.unique_id < b.unique_id;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        vector<Student> students;
        for (int i = 0; i < 3; ++i) {
            int id, marks;
            string name;
            char section;
            cin >> id >> name >> section >> marks;
            students.emplace_back(id, name, section, marks);
        }

        
        sort(students.begin(), students.end(), compare);

        
        students[0].print();
    }

    return 0;
}


