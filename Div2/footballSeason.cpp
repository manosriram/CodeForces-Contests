#include <iostream>
#define ld long long int
using namespace std;

int main() {
    ld n, p, w, d;
    bool done = false;
    cin >> n >> p >> w >> d;

    for (ld x = 0; x <= n && x < p; x++) {
        for (ld y = 0; y <= n && y < p; y++) {
            ld z = (n - x - y);
            if (z < 0) continue;

            if ((x * w) + (y * d) == p) {
                cout << x << " " << y << " " << z;
                done = true;
                break;
            }
        }
        if (done) break;
    }
    if (!done) cout << -1;
}