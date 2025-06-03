#include<bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=2;i<= n;i++) {
        int isPrime = 1; 
        for (int k=2; k*k<= i; k++) {
            if (i%k == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cout <<i<< " ";
        }
    }
    cout << endl;
    return 0;
}

