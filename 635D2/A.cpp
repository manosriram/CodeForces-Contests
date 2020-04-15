// g++ -std=c++17 A.cpp -o a.out && ./a.out < in
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

int main() {
    IOS;

    ll T, a, b, c, d;
    cin >> T;
    while (T--) {
        cin >> a >> b >> c >> d;
        if (a == b) cout << a;
        else cout << a+1;

        cout << " ";
        if (b==c) cout << b;
        else cout << b+1;
        
        cout << " ";
        if (c==d) cout << c;
        else cout << c+1;

        cout << endl;
    }
}
