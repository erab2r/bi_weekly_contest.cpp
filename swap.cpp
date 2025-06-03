#include<bits/stdc++.h>
using namespace std;

void swapValues(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main() {
    int x, y;
    cin >> x >> y;
    swapValues(x, y);
    return 0;
}
