#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main() {
    int T, n;
    cin >> T;
    while (T--) {
        cin >> n;
        ll a[n];
        bool pos = true;
        ll ss = 0;
        for (ll t=0;t<n;++t) {
            cin >> a[t];
            ss += a[t];
            if (a[t] < 0) pos = false;
        }
        if (pos) {
            cout << "YES\n";
            continue;
        }

        ll dp[n];
        dp[0] = a[0];
        for (ll t=1;t<n-1;++t)
            dp[t] = max(dp[t-1], a[t]+dp[t-1]);

        dp[n-1] = max(dp[n-2], max((dp[n-2] - dp[0]) + a[n-1], a[n-1]));

        cout << ss << " " << dp[n-1] << endl;
        if (ss > dp[n-1]) cout<<"YES\n";
        else cout << "NO\n";
    }
}

