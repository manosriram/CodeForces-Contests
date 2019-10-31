#include <iostream>
#include <iomanip>
#include <vector>
#include <float.h>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include "unordered_map"
#define SPEED cin.sync_with_stdio(false);cin.tie(NULL);
#define trace(x) cerr << #x << " " << x << '\n';
#define ld long long
#define disp(n) for (auto t : n)
#define dbl long double
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
    cout << fixed << showpoint;
    cout << setprecision(9);
    dbl n, l, temp;
    cin >> n >> l;
    bool isZero = false;
    vector<dbl> diff;
    
    for (dbl t=0;t<n;t++) {
        cin >> temp;
        diff.pb(temp);
    }
    sort(diff.begin(), diff.end());  
    dbl max_ = diff[0];
    for (dbl t=0;t<n-1;t++) {
        dbl val = diff[t+1] - diff[t];
        if (val > max_)
            max_ = val;
    }
    
    max_ /= 2;
    cout << max(max_, max(diff[0] - 0, l - diff[n-1]));


}
