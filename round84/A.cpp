#include <iostream>
#include <map>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <vector>
#include <float.h>
#include <limits.h>
#include <stack>
#include <queue>
#include <time.h>
#include "unordered_map"
using namespace std;
#define MAX INT_MAX
#define MIN INT_MIN
#define INF 1e9
#define FASTER cin.sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
typedef vector<int> vi;
typedef pair<int,int> pi;

int main() {
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    freopen("err", "w", stderr);
#endif
    ll T, n, k;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        ll dp[n+1][n+1];
        dp[1][1] = 1;
        for (int t=1;t<n;++t) {
            if (t & 1) dp[1][t] = t;
            else dp[1][t] = dp[1][t-1];
        }

        bool fn = false;
        for (int t=2;t<n;++t) {
            for (int j=1;j<n;++j) {
                if (t & 1 && j & 1) {
                    dp[t][j] = t + dp[t-2][j];
                } else dp[t][j] = dp[t-1][j];
            }
        }
        for (int t=1;t<n;++t) {
            for (int j=1;j<n;++j) {
                if (t & 1 && j & 1){
                    if (dp[t][j] == n && (t+j-1 == k)) {
                        fn = true;
                        break;
                    }
                }
            }
            if (fn) break;
        }

        if (fn) cout << "YES";
        else cout << "NO";
        cout << endl;
    }


#ifndef ONLINE_JUDGE
    cout << "Time Taken: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
#endif
}
