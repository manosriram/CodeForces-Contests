// g++ -std=c++17 cpp.cpp -o a.out && ./a.out < in
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <map>
#include <vector>
#define ll long long
#define IOS cin.sync_with_stdio(false);cin.tie(nullptr);
#define endl "\n"
#define pb push_back
#define rep(t, n) for (int t=0;t<(n);++t)
const ll NN = 1e5+5;
using namespace std;

void primes(int n, vector<int> &v) {
    while (n % 2 == 0) {
        v.pb(2);
        n /= 2;
    }
    for (int t=3;t<=sqrt(n);t+=2) {
        while (n % t == 0) {
            v.pb(t);
            n /= t;
        }
    }
    if (n > 2) v.pb(n);
    return;
}

void print(vector<int> v) {
    for (auto tt: v) cout << tt << " ";

    cout << endl;
    return;
}

int main() {
    IOS;
    int T, n;
    cin >> T;
    vector<int> v, vv;
    map<int, bool> mm;
    while (T--) {
        v.clear();
        vv.clear();
        mm.clear();

        cin >> n;
        primes(n, v);
        print(v);
        return 0;
        if (v.size() < 3) {
            cout << "NO\n";
            continue;
        }
        int in = 0, pd;
        while (in < v.size()) {
            pd = 1;
            while (in < v.size() && mm[pd]) {
                pd *= v[in];
                ++in;
            }
            if (pd > 1 && !mm[pd])
                vv.pb(pd);
            mm[pd] = true;
        }
        if (vv.size() < 3) cout << "NO";
        else {
            cout << "YES\n";
            for (auto tt: vv) cout << tt << " ";
        }
        cout << '\n';
    }
}


