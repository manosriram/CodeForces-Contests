#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <math.h>
#include "unordered_map"
#define F first
#define S second
#define ll long long int
#define pb push_back
#define debug cout << "hi" << '\n';
#define FASTER cin.sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main() {
    FASTER;
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
#endif
    ll n;
    cin >> n;
    ll a[n+1], x[n+1], b[n+1];
    for (ll t=1;t<=n;++t) cin >> b[t];

    x[1] = 0;
    a[1] = x[1] + b[1];
    for (ll t=2;t<=n;++t) {
        x[t] = max(a[t-1], x[t-1]);
        a[t] = x[t] + b[t];
    }

    for (ll t=1;t<=n;++t) cout << a[t] << " ";
    

#ifndef ONLINE_JUDGE
    cout << "Time Taken: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
#endif
}
