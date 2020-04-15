// g++ -std=c++17 cpp.cpp -o a.out && ./a.out < in
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <map>
#define ll long long
#define IOS cin.sync_with_stdio(false);cin.tie(nullptr);
#define endl "\n"
#define pb push_back
#define rep(t, n) for (int t=0;t<(n);++t)
const ll NN = 1e5+5;
using namespace std;

int main() {
    IOS;
    int T;
    cin >> T;
    while (T--) {
        int a[3], n;
        cin >> a[0] >> a[1] >> a[2] >> n;
        sort(a, a+3);
        int ss = (a[2] - a[1]) + (a[2] - a[0]);
        if (ss > n) {
            cout << "NO\n";
            continue;
        }
        n -= ss;
        if (n % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

