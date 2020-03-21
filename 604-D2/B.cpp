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
    ll T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int xx;
        map<int, int> dist;
        for (ll t=0;t<n;++t) {
            cin >> xx;
            dist[xx - 1] = t;
        }
        int l = n, r = 0;
        string ss;
        for (int t=0;t<n;++t) {
            l = min(l, dist[t]);
            r = max(r, dist[t]);

            if (r - l == t) ss += '1';
            else ss += '0';
        }
        cout << ss;

        cout << '\n';
    }


#ifndef ONLINE_JUDGE
    cout << "Time Taken: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
#endif

}
