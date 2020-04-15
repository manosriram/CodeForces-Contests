#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int T;
    int n, x, y;
    cin >> T;
    vector<pair<int, int>> v;
    while (T--) {
        v.clear();
        cin >> n;
        for (int t=0;t<n;++t) {
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }
        sort(v.begin(), v.end());

        bool dn = true;
        for (int t=0;t<n-1;++t) {
            if (v[t+1].second < v[t].second) {
                cout << "NO\n";
                dn = false;
                break;
            }
        }
        if (!dn) continue;

        cout << "YES\n";
        int st = 0, ed = 0;
        for (int t=0;t<n;++t) {
            if (st < v[t].first) {
                for (int tt=0;tt<v[t].first-st;++tt)
                    cout << 'R';

                st = v[t].first;
            }
            if (ed < v[t].second) {
                for (int tt=0;tt<v[t].second-ed;++tt) cout << 'U';

                ed = v[t].second;
            }
        }
        cout << '\n';
    }
}
