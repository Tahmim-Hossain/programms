#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int>& v, int x) {
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while(cur_idx != 0) {
        int parent_idx = (cur_idx - 1) / 2;
        if(v[parent_idx] > v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}

void delete_heap(vector<int>& v) {
    if(v.empty()) return;
    v[0] = v.back();
    v.pop_back();
    int cur = 0;
    while(true) {
        int left_idx = cur * 2 + 1;
        int right_idx = cur * 2 + 2;
        int smallest = cur;
        
        if(left_idx < v.size() && v[left_idx] < v[smallest])
            smallest = left_idx;
        if(right_idx < v.size() && v[right_idx] < v[smallest])
            smallest = right_idx;
        
        if(smallest != cur) {
            swap(v[cur], v[smallest]);
            cur = smallest;
        } else {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int y;
        cin >> y;
        insert_heap(v, y);
    }
    
    int q;
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        if(x == 0) {
            int a;
            cin >> a;
            insert_heap(v, a);
            cout << v[0] << endl;
        }
        if(x == 1) {
            if(v.empty())
                cout << "Empty" << endl;
            else 
                cout << v[0] << endl;
        }
        if(x == 2) {
            if(!v.empty()) {
                delete_heap(v);
                if(!v.empty())
                    cout << v[0] << endl;
                else
                    cout << "Empty" << endl;
            } else {
                cout << "Empty" << endl;
            }
        }
    }

    return 0;
}
