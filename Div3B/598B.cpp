#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <numeric>
#include "unordered_map"
#define SPEED cin.sync_with_stdio(false);cin.tie(NULL);
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define forn(t, n) for (ld t = 0; t < n; t++)
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define c_sort(a) sort(a, a + sizeof(a) / sizeof(a[0]))
#define NL cout << '\n';
#define INF (int)1e9
using namespace std;
typedef vector<int> vi;
typedef unordered_map<int, int> ump;

int main() {
    SPEED;
    vi v;
    int n, T;
    int temp;
    freopen("in.txt", "r", stdin);
    cin >> T;
    while (T--) {
        v.clear();
        cin >> n;

        for (int t=0;t<n;t++) {
            cin >> temp;
            v.push_back(temp);
        }
        pair<int, int> p;
        int max_ = INT_MIN;
        vector<int> q;

        for (int t=n-1;t<0;t--) {
            if (v[t] - v[t-1] > max_) {
                max_ = v[t] - v[t-1];
                swap(v[t], v[t-1]);
            }
        }

        for (auto t : v)
            cout << t << " ";

        NL;
    }
}
