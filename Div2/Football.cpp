#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include "unordered_map"
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define forn(t, n) for (ld t = 0; t < n; t++)
#define pb push_back
#define mod 1000000007
#define c_sort(a) sort(a, a + sizeof(a) / sizeof(a[0]))
#define NL cout << '\n';
#define INF (int)1e9
#define sws cin.sync_with_stdio(false);
#define tieNULL cin.tie(NULL);
using namespace std;
typedef vector<int> VI;

int main() {
    string s;
    cin >> s;
    int cn = 0;
    bool done = false;
    char prev = s[0];
    forn(t, s.length()) {
        if (s[t] == prev) {
            ++cn;
        } else {
            cn = 1;
            prev = s[t];
        }
        if (cn == 7) {
            cout << "YES";
            done = true;
            break;
        }
    }
    if (!done)
        cout << "NO";
}
