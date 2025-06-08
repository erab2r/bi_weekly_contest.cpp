#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(char &c : s){
        c = toupper(c);
    }
    map<char,int>freq;
    for(char c : s){
        freq[c]++;
    }
   int total_count = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});
   cout << total_count << endl;


    return 0;
}