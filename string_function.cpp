#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < q; i++) {
        string word;
        cin >> word;
        if (word == "pop_back") {
            s.pop_back();
        } 
        else if (word == "front") {
            cout << s.front() << endl;
        } 
        else if (word == "back") {
            cout << s.back() << endl;
        } 
        else if (word == "sort") {
            int l, r;
            cin >> l >> r;
            sort(s.begin() + l - 1, s.begin() + r);
        } 
        else if (word == "reverse") {
            int l, r;
            cin >> l >> r;
            reverse(s.begin() + l - 1, s.begin() + r);
        } 
        else if (word == "print") {
            int pos;
            cin >> pos;
            cout << s[pos - 1] << endl;
        } 
        else if (word == "substr") {
            int l, r;
            cin >> l >> r;
            cout << s.substr(l - 1, r - l + 1) << endl;
        } 
        else if (word == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
    return 0;
}
