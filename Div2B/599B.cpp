#include <iostream>
#include <string.h>
#include <vector>
#include "unordered_map"
using namespace std;

int main() {
    int T, n;
    string s, t;
    cin >> T;
    while (T--) {
        cin >> n;
        cin >> s >> t;
        unordered_map<char, int> m1, m2;

        for (int i=0;i<n;i++) {
            ++m1[s[i]];
            ++m2[t[i]];
        }
        auto itr2 = m2.begin();
        int ct = 0;
       
        for (auto itr = m1.begin(); itr != m1.end(); itr++, itr2++) {
            if (itr->first != itr2->first && itr->second == itr2->second)
                ++ct;
        }

        if (ct == 1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';

    }
}
