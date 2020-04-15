#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#define pb push_back
using namespace std;

int main() {
    int T, n, k;
    cin >> T;
    while (T--) {
        cin >> n;
        int m = n * 2;
        int a[m];
        for (int t=0;t<m;++t) cin >> a[t];

        sort(a, a+m);
        cout << abs(a[n-1] - a[n]) << '\n';
    }
}

