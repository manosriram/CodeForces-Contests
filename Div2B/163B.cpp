#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
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
    int n, t;
    string s;
    cin >> n >> t;
    cin >> s;

    for (int j = 0;j < t;j++) {
        for (int t1=0;t1<s.end()-s.begin()-1;t1++) {
            if (s[t1] == 'B' && s[t1+1] == 'G') {
                swap(s[t1], s[t1+1]);
                ++t1;
            }
        }
    }
    
    cout << s;
}
