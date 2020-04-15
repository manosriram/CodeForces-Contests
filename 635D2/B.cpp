#include <iostream>
#include <math.h> 
#include <cstring>
using namespace std;
int dp[110000];

bool Solve(int x, int a, int b) {
    if (x <= 0) return true;
    if (a <= 0 && b <= 0) return false;

    if (dp[x] != -1) return dp[x];

    int xa = floor((double)x/2) + 10, xb = x - 10;
    if (a > 0 && b > 0)
        return dp[x] = Solve(xa, a-1, b) || Solve(xb, a, b-1);
    else if (a > 0)
        return dp[x] = Solve(xa, a-1, b);
    else if (b > 0)
        return dp[x] = Solve(xb, a, b-1);

    return dp[x];
}

int main() {
    int T;
    int x, a, b;
    cin >> T;
    while (T--) {
        memset(dp, -1, sizeof(dp));
        cin >> x >> a >> b;
        if (Solve(x, a, b))
            cout << "YES\n";
        else cout << "NO\n";
    }
}
