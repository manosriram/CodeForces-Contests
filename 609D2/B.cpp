#include <iostream>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;

int main() {
    ll n, m;
    cin >> n >> m;
    ll a[n], b[n];
    for (ll t=0;t<n;++t) cin >> a[t];
    for (ll t=0;t<n;++t) cin >> b[t];
    ll x = 0;

    sort(a, a+n);
    for (ll t=0;t<n;++t) {
        x = (x + abs(a[t] - b[t])) % m;
    }
    cout << (x % m);
}
