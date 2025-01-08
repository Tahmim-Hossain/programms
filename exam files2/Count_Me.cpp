#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  

    while(t--) {
        string sentence;
        getline(cin, sentence); 

        vector<string> words;
        string word;
        stringstream ss(sentence);

        
        while(ss >> word) {
            words.push_back(word);
        }

        map<string, int> word_count;
        string frequent_word;
        int max_count = 0;

        
        for(const string& w : words) {
            word_count[w]++;


            if(word_count[w] > max_count) {
                max_count = word_count[w];
                frequent_word = w;
            }
        }

        
        cout << frequent_word << " " << max_count << endl;
    }

    return 0;
}


