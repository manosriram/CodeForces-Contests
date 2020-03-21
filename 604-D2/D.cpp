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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int dp[a+b+c+d], in = -1;
    int aa = a, bb = b, cc = c, dd = d;
    bool is = true;
    int n = a+b+c+d;

    for (int t=0;t<aa+bb;++t) {
        if (a > 0) dp[++in] = 0;
        if (b > 0) dp[++in] = 1;

        --a, --b;
    }

    for (int t=0;t<bb+cc;++t) {
        if (b > 0) dp[++in] = 1;
        if (c > 0) dp[++in] = 2;

        --b, --c;
    }
    for (int t=0;t<cc+dd;++t) {
        if (c > 0) dp[++in] = 2;
        if (d > 0) dp[++in] = 3;

        --c, --d;
    }
    for (int t=0;t<aa+bb+cc+dd-1;++t) {
        if (dp[t+1] - dp[t] != 1 || dp[t+1] - dp[t] != -1) {
            cout << dp[t+1] - dp[t];
            is = false;
            break;
        }
    }
    if (!is) cout << "NO";
    else {
        cout << "YES" << '\n';
        for (int t=0;t<n;++t) cout << dp[t] << " ";
    }

#ifndef ONLINE_JUDGE
    cout << "Time Taken: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
#endif

}
