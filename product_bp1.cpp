#include<bits/stdc++.h>
using namespace std;

int main() {
    int l,r,m;
    cin >>l>>r>>m;

    long long products = 1;

    for (int i=l;i<=r;i++) {
        products=(products*i) %m;
        if (products == 0) 
        break;
    }
    cout << products << endl;

    return 0;
}
