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
   
    for (dbl t = 0;t < n;++t) {
        cin >> temp;
        if (temp == 0)
            isZero  = true;

        diff.pb(temp);
    }
    
    // if (!isZero)
       //  diff.insert(diff.begin(), 0);
    dbl p; 
    sort(diff.begin(), diff.end());
    dbl max_ = DBL_MIN;
    for (dbl t = 0;t < diff.size() - 1;++t) {
        dbl val = diff[t+1] - diff[t];
        if (val > max_)
           max_ = val;
    }
    p = max_;
    p /= 2;

    if (diff[0] > p)
        p = diff[0];

    cout << (long double) p << endl;
}
