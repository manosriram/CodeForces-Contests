#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, bool> mp;
    int a[n], dp[n];
    
    for (int t=0;t<n;++t) cin >> a[t];

    dp[n-1] = 1;
    mp[a[n-1]] = true;

    for (int t=n-2;t>=0;--t) {
        if (mp[a[t]])
            dp[t] = dp[t+1];
        else {
            dp[t] = dp[t+1] + 1;
            mp[a[t]] = true;
        }
    }
    int tmp;
    while (m--) {
        cin >> tmp;
        cout << dp[tmp - 1] << '\n';
    }
}

