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

bool Solve(int *a, int n) {
    int ct = 0, ctt = 0;
    for (int t=0;t<n;++t) {
        if (a[t] % 2 == 0) ++ct;
        else ++ctt;
    }
    return (ct >= 1 || ctt % 2 == 0);
}

int main() {
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
    freopen("err", "w", stderr);
#endif
    int T, n;
    cin >> T;
    vector<int> vv;
    while (T--) {
        vv.clear();
        cin >> n;
        int a[n], s = 0;
        for (int t=0;t<n;++t) {
            cin >> a[t];
            s += a[t];
        }
        bool done = false;
        int ct = 0;
        if (Solve(a, n)) {
            for (int t=0;t<n;++t) {
                if (a[t] % 2 == 0) {
                    done = true;
                    vv.push_back(t);
                    ++ct;
                }
            }
            if (!done) {
                ct = 0;
                for (int t=0;t<n;++t) {
                    if (a[t] & 1 && ct < 2) {
                        done = true;
                        vv.push_back(t);
                        ++ct;
                    }
                }
            }
        }
        if (!done) cout << -1;
        else {
            cout << vv.size() << endl;
            for (auto t: vv) cout << t+1 << " ";
        }
        cout << '\n';
    }

}
