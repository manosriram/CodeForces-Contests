#include <iostream>
#define ll long long
using namespace std;

int main() {
    ll n, k, T;
    cin >> T;
    while (T--) {
        cin >> n >> k;
        string s;
        s += "bb";
        for (ll t=0;t<n-2;++t) s += 'a';

        pair<ll, int> pr;
        pr.first = 0;
        pr.second = 1;

        k = (n * (n-1))/2 - k;
        for (ll t=0;t<k;++t) {
            if (pr.second == n-1) {
                pr.first++;
                pr.second = pr.first + 1;
                continue;
            }
            ++pr.second;
        }
        s[0] = s[1] = 'a';
        s[pr.first] = 'b';
        s[pr.second] = 'b';

        cout << s;
        cout << '\n';
    }
}

