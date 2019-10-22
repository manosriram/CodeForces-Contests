#include <math.h>
#include <iostream>
using namespace std;

int Solve(int a[], int n) {
    for (int t = 0; t < n; t++) {
        for (int j = t + 1; j < n; j++) {
            if (abs(a[t] - a[j]) == 1) return 2;
        }
    }
    return 1;
}

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;

        int a[100];
        for (int t = 0; t < n; t++) cin >> a[t];

        cout << Solve(a, n);
    }
}