#include <iostream>
#include <vector>
#include "unordered_map"
#include <map>
using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    int temp, n;
    cin >> n;
    unordered_map<int, int> mp;
    vector<int> v(n);
    auto itr = v.begin();

    for (int t=0;t<n;t++) {
        cin >> temp;
        v.insert(itr, temp);
        ++mp[temp];     
    }

    for (int t=n-1;t>=0;--t) {
        --mp[v[t]];
        int mx = max_element(mp.begin(), mp.end())->second;
        int mn = min_element(mp.begin(), mp.end())->second;
    
        cerr << t << " " << mx << " " << mn << endl; 
        if (mx - mn == 1 || mx - mn == mx) {
            cout << t;
            break;
        }
    }

}
