#include <iostream>
using namespace std;

int sub(int i, int a[2][100], int n) {
    int k = 0;  // Reset k for each call
    for (int j = 0; j < n; j++) {
        while (a[i][j] != 0) {
            k++;
            a[i][j] = a[i][j] / 10;
        }
    }
    return k;
}

int main() {
    int n;
    cin >> n;
    
    int a[2][100];  // Assuming max size of 100, adjust if necessary
    
    // Input the 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    int s = 0;  // Counter for the result
    for (int i = 0; i < 2; i++) {
        if (sub(i, a, n) == 6) {
            s++;
        }
    }
    
    cout << s;
    return 0;
}

