#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    vector<string> r;

    while(T--) 
    {
        string s;
        getline(cin, s);

        string fs = "";
        for (char ch : s) {
            
            if (ch != 'z' && ch != 'x' && ch != 'c' && ch != 'v' && ch != 'b' && ch != 'n' && ch != 'm') 
            {
                fs += ch;
            }
        }

        r.push_back(fs);
    }

    
    for (const string& re : r) {
        cout << re << endl;
    }

    return 0;
}
