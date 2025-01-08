#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to check if a palindrome can be formed
string makePalindrome(const string& str) {
    unordered_map<char, int> freq;
    for (char ch : str) {
        freq[ch]++;
    }

    int oddCount = 0;
    char oddChar = '\0'; // To track the odd character (if any)
    for (auto& pair : freq) {
        if (pair.second % 2 != 0) {
            oddCount++;
            oddChar = pair.first;
        }
    }

    // Check the possibility
    if (oddCount > 1) {
        return "Not possible";
    }

    // Form the palindrome
    string half = "", middle = "";
    for (auto& pair : freq) {
        string temp(pair.second / 2, pair.first);
        half += temp;
        if (pair.second % 2 != 0) {
            middle = pair.first;
        }
    }

    string palindrome = half + middle + string(half.rbegin(), half.rend());
    return palindrome;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string result = makePalindrome(str);
    cout << result << endl;

    return 0;
}
