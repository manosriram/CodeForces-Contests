#include <iostream>
using namespace std;

int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        int a[n];
        for (int t=0;t<n;++t) cin >> a[t];

        int ct = 0;
        for (int t=0;t<n;++t) {
            if (a[t] == 0) {
                a[t] = 1;
                ++ct;
            }
        }
        int sm = 0;
        for (int t=0;t<n;++t) sm += a[t];

        if (sm == 0) ++ct;

        cout << ct << endl;
    }
}
