#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> ss;
    int T, n, k, tm;
    cin >> T;
    while (T--) {
        ss.clear();
        cin >> n;

        for (int t=1;t<=n;++t) ss.insert(t);

        bool dn = false;
        int nn = -1;
        for (int t=1;t<=n;++t) {
            dn = false;
            cin >> k;
            for (int j=0;j<k;++j) {
                cin >> tm;
                if (*ss.find(tm) <= n && !dn) {
                    dn = true;
                    ss.erase(tm);
                }
            }
            if (!dn) nn = t;
        }
        if (ss.empty())
            cout << "OPTIMAL" << '\n';
        else {
            cout << "IMPROVE" << '\n' << nn << " " << *ss.begin() << '\n';
        }
    }
}

