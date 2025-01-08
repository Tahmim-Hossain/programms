#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to determine precedence of operators
    int priority(char op) {
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        if (op == '^') return 3;
        return 0;
    }

    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        int i = 0;
        string ans;
        stack<char> st;
        
        while (i < s.size()) {
            // If the character is an operand, add it to the result
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                ans += s[i];
            
            // If the character is '(', push it to the stack
            else if (s[i] == '(')
                st.push(s[i]);
            
            // If the character is ')', pop until '(' is encountered
            else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop();  // Remove the '(' from the stack
            } 
            // If the character is an operator
            else {
                while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        
        // Pop all remaining operators in the stack
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        return ans;
    }
};

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}
