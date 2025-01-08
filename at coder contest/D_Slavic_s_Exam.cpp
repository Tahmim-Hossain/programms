#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s, t;
        cin >> s >> t;
        int j =0, local =0;
        bool flag = false;
    for(int i=0; i<s.size(); i++){
        if(s[i]==t[j] || s[i]=='?'){
            if(s[i]=='?'){
                s[i]=t[j];
            }
            j++;
        }
        
        if(j==t.size()){
            local = i;
            flag = true;
            break;
        }
    }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        if(flag){
            for(int i=0; i<s.size(); i++){
                if(s[i]=='?'){
                    s[i]='a';
                }
            }
            cout << s << endl;
        }
    }
    return 0;
}