// g++ -std=c++17 C.cpp -o a.out && ./a.out < in
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
    int n;
    cin >> n;
    int a[n];
    for (int t=0;t<n;++t) cin >> a[t];

    sort(a, a+n, greater<int>());
    for (auto t: a) cout << t << " ";
}

