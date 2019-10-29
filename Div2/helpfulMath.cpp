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
typedef vector<int> vi;

int main() {
    // freopen("In.txt", "r", stdin);

    string s, s1;
    cin >> s;
    
    for (int t=0;t<=s.length();t+=2) {
        s1.push_back(s[t]);
    }
    sort(s1.begin(), s1.end());
    int t;
    for(t =0;t<s1.length();t++) {
        if (t == s1.length() - 1)
            break;

        cout << s1[t] << "+";
    }

    cout << s1[t];
}
