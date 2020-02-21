#include <iostream>
#include <math.h>
#include "unordered_map"
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T, n;
    cin >> T;
    vector<int> v;
    while (T--) {
        cin >> n;
        int temp;
        bool same = true;
        v.clear();
        for (int t=0;t<n;t++) {
            cin >> temp;
            v.emplace_back(temp);
        }
        auto isSame = [v](int x){ return x==v[0];};
        same = all_of(v.begin(), v.end(), isSame);

        if (same) {
            cout << temp << '\n';
        } else {
            sort(v.begin(), v.end(), [](int a, int b) {return a > b;});
            int ct = 1;
            for (int t=0;t<n;t++) {
                if (v[t] >= t + 1)
                    ct = t + 1;
            }
            cout << ct << '\n';
        }
    }
}
