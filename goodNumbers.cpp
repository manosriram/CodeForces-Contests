#include <math.h>
#include <iostream>
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    scanf("%d", &T);
    while (T--) {
        int n;
        scanf("%d", &n);
        bool alk;
        while (true) {
        alk = true;
        int c = n;
        while (c > 0) {
            if (alk && (c % 3) == 2)
                alk = false;
            
            c /= 3;
        }
        if (alk)
            break;
        ++n;
        }
        cout << n << endl;
    }
}