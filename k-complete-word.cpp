#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int srch(int *aa, int k, int n) {
    int mn = INT_MAX;
    for (int t=0;t<26;++t) {
        if (aa[t] < mn && aa[t] != 0)
            mn = aa[t];
    }

    if (mn == n/k) return 0;

    return mn;
}

int main() {
    string s;
    int T, n, k;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        int aa[26];
        for (int t=0;t<26;++t) aa[t] = 0;
        cin >> s;

        int tot = 0;
        int xx;
        for (int t=0;t<k;++t) {
            for (int j=t;j<n;j+=k) {
                ++aa[s[j] - 'a'];
            }
            tot += srch(aa, k, n);
            for (int t=0;t<26;++t) aa[t] = 0;
        }
        cout << tot << endl;
    }
}

