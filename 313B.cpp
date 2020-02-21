#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int dp[s.length()];
    dp[0] = 0;

    for (int t=1;t<s.length();++t) {
        if (s[t] == s[t-1]) dp[t] = dp[t-1] + 1;
        else dp[t] = dp[t-1];
    }
    int T, l, r;
    cin >> T;
    while (T--) {
        cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << '\n';
    }
}

