#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int e[4001];  
    for (int i = 0; i <= n; i++) {
        e[i] = -1;
    }
    e[0] = 0;

    for (int i = 1; i <= n; i++) {       
        if (i >= a && e[i-a] != -1)    
            e[i] = max(e[i], e[i-a] + 1);
        if (i >= b && e[i - b] != -1)
            e[i] = max(e[i],e[i-b] + 1);
        if (i >= c && e[i - c] != -1)
            e[i] = max(e[i],e[i-c] + 1);
    }
    cout <<e[n] << endl;
    return 0;
}

