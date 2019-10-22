#include <iostream>
using namespace std;

int Solve(int i, int a[]) {
    int i1 = i, day = 0;
    i = a[i];

    while (i != i1) {
        i = a[i];
        ++day;
    }
    return ++day;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n + 1];

        for (int t = 1; t <= n; t++) cin >> a[t];

        for (int t = 1; t <= n; t++) {
            cout << Solve(t, a) << " ";
        }
        cout << endl;
    }
}