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
    SPEED;
    int n, temp;
    unordered_map<int, int> m;
    // zfreopen("in.txt", "r", stdin);
    
    cin >> n;
    int pt[n+2];
    for (int t=1;t<=n;t++) {
        cin >> pt[t];
    }
    
    for (int t=1;t<=n;t++) {
        cin >> temp;
        m[temp] = t;
    }
    trace(3); 
    int ct = 0, t, j; 
    
    int max_ = INT_MIN; 
    for (int t=1;t<=n;t++) {
        if (m[pt[t]] > max_)
            max_ = m[pt[t]];
        else
            ++ct;
    }
    
    cout << ct;
}
