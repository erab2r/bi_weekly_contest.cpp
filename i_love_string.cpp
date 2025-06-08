#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
   for(int ts = 0;ts < n;ts++){
    string s,t;
    cin >> s >> t;
    string total_result = "";
    int maxlength = max(s.size(),t.size());
    for(int i = 0;i<maxlength;i++){
        if(i<s.size()){
            total_result +=s[i];
            
        }
        if(i<t.size()){
            total_result +=t[i];
        }
    }
    cout << total_result << endl;

   }

    return 0;
}